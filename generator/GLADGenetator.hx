package;

import haxe.io.Output;
import haxe.xml.Access;
import sys.io.File.getContent;

using StringTools;

typedef Thingy = {name:String, defineName:String, ?appendFile:String, output:String, xmlName:String, haxeName:String, lightColor:Int, darkColor:Int, features:Array<String>, ?exclude:EReg}

class GLADGenetator {
	final typeMap:Map<String, String> = [
		// kill me
		'GLenum' => '_I32',
		'GLboolean' => '_I32',
		'GLbitfield' => '_I32',
		'GLbyte' => '_I32',
		'GLubyte' => '_I32',
		'GLshort' => '_I32',
		'GLushort' => '_I32',
		'GLint' => '_I32',
		'GLuint' => '_I32',
		'GLclampx' => '_I32',
		'GLsizei' => '_I32',
		'GLchar' => '_I32',
		'GLuint64' => '_I64',

		'GLfloat' => '_F32',
		'GLclampf' => '_F32',

		'GLdouble' => '_F64',
		'GLclampd' => '_F64',

		'GLchar *' => '_STRING',
		'GLchar **' => '_ARR',

		'void' => '_VOID',
		'void *' => '_BYTES',
		'GLsync' => '_ABSTRACT(GLSync)',
		'void **' => '_REF(_BYTES)', // is this a correct conversion?
		'GLDEBUGPROC' => '_FUN(_VOID, _I32 _I32 _I32 _I32 _I32 _BYTES)',
		'GLubyte *' => '_STRING',
		'GLbyte *' => '_STRING',
		'GLintptr *' => '_ARR',
		'GLsizeiptr *' => '_ARR',

		'GLboolean *' => '_REF(_I32)',
		'GLint *' => '_REF(_I32)',
		'GLenum *' => '_REF(_I32)',
		'GLshort *' => '_REF(_I32)',
		'GLushort *' => '_REF(_I32)',
		'GLuint *' => '_REF(_I32)',
		'GLsizei *' => '_REF(_I32)',
		'GLintptr' => '_REF(_I32)',
		'GLsizeiptr' => '_REF(_I32)',
		'GLint64 *' => '_REF(_I64)',
		'GLuint64 *' => '_REF(_I64)',

		'GLfloat *' => '_REF(_F32)',
		'GLdouble *' => '_REF(_F64)',
	];

	final haxeReturnMap:Map<String, String> = [
		'Void' => '{}',
		'Int' => '{ return 0; }',
		'String' => '{ return \'\'; }',
		'hl.Bytes' => '{ return null; }',
		'hl.Abstract<"GLSync">' => '{ return null; }',
	];

	final haxeTypeMap:Map<String, String> = [
		// kill me
		'GLenum' => 'Int',
		'GLboolean' => 'Int',
		'GLbitfield' => 'Int',
		'GLbyte' => 'Int',
		'GLubyte' => 'Int',
		'GLshort' => 'Int',
		'GLushort' => 'Int',
		'GLint' => 'Int',
		'GLuint' => 'Int',
		'GLclampx' => 'Int',
		'GLsizei' => 'Int',
		'GLchar' => 'Int',
		'GLuint64' => 'hl.I64',

		'GLfloat' => 'hl.F32',
		'GLclampf' => 'hl.F32',

		'GLdouble' => 'hl.F64',
		'GLclampd' => 'hl.F64',

		'GLchar *' => 'String',
		'GLchar **' => 'hl.NativeArray<hl.Bytes>',

		'void' => 'Void',
		'void *' => 'hl.Bytes',
		'void **' => 'hl.Ref<hl.Bytes>',
		'GLsync' => 'hl.Abstract<"GLSync">',
		'GLDEBUGPROC' => '(Int->Int->Int->Int->Int->hl.Bytes)',
		'GLubyte *' => 'String',
		'GLbyte *' => 'String',
		'GLintptr *' => 'hl.NativeArray<hl.Ref<Int>>',
		'GLsizeiptr *' => 'hl.NativeArray<hl.Ref<Int>>',

		'GLboolean *' => 'hl.Ref<Int>',
		'GLint *' => 'hl.Ref<Int>',
		'GLenum *' => 'hl.Ref<Int>',
		'GLshort *' => 'hl.Ref<Int>',
		'GLushort *' => 'hl.Ref<Int>',
		'GLuint *' => 'hl.Ref<Int>',
		'GLsizei *' => 'hl.Ref<Int>',
		'GLintptr' => 'hl.Ref<Int>',
		'GLsizeiptr' => 'hl.Ref<Int>',
		'GLint64 *' => 'hl.Ref<hl.I64>',
		'GLuint64 *' => 'hl.Ref<hl.I64>',

		'GLfloat *' => 'hl.Ref<hl.F32>',
		'GLdouble *' => 'hl.Ref<hl.F64>',

		// vulkan

		// 'uint32_t' => '_I32',
		// 'uint64_t' => '_I64',
		// 'VkSampleMask' => '_I32',
		// 'VkBool32' => '_I32',
		// 'VkFlags' => '_I32',
	];

	final argumentMap:Map<String, String> = [
		'GLchar **' => 'varray *',
		'GLintptr *' => 'varray *',
		'GLsizeiptr *' => 'varray *',
		'GLchar *' => 'vstring *',
		'void *' => 'vbyte *',
		'void **' => 'vbyte **',
		'GLDEBUGPROC' => 'vclosure *'
	];


	final fuckFuckFUckFUCkFUCK:Map<String, (StringBuf, String)->String> = [
		'GLchar **' => (functionBody:StringBuf, paramName:String) -> {
			return 'hl_aptr($paramName, GLchar *)';
		},
		'GLintptr *' => (functionBody:StringBuf, paramName:String) -> {
			return 'hl_aptr($paramName, GLintptr)';
		},
		'GLsizeiptr *' => (functionBody:StringBuf, paramName:String) -> {
			return 'hl_aptr($paramName, GLsizeiptr)';
		},
		'GLchar *' => (functionBody:StringBuf, paramName:String) -> {
			return '$paramName->bytes';
		},
		'GLDEBUGPROC' => (functionBody:StringBuf, paramName:String) -> {
			functionBody.add('\thl_add_root(&$paramName);\n');
			functionBody.add('\tdebugFunc = $paramName;\n');
			return 'onDebugData';
		},
		'GLuint *' => (functionBody:StringBuf, paramName:String) -> {
			return '&$paramName';
		},
	];


	static final thingies:Array<Thingy> = [
		{name: 'gl', output: 'out/gl', xmlName: 'gl.xml', lightColor: 94, darkColor: 34, features: [ // KILL ME
			'GL_VERSION_1_0', 
			'GL_VERSION_1_1', 
			'GL_VERSION_1_2', 
			'GL_VERSION_1_3', 
			'GL_VERSION_1_4', 
			'GL_VERSION_1_5', 
			'GL_VERSION_2_0', 
			'GL_VERSION_2_1', 
			'GL_VERSION_3_0', 
			'GL_VERSION_3_1', 
			'GL_VERSION_3_2', 
			'GL_VERSION_3_3', 
			'GL_VERSION_4_0', 
			'GL_VERSION_4_1', 
			'GL_VERSION_4_2', 
			'GL_VERSION_4_3', 
			'GL_VERSION_4_4'
		], appendFile: 'glInclude', haxeName: 'OpenGL', defineName: 'GLAD_GL_IMPLEMENTATION'},
		// will do later when im not lazy
		// {name: 'vulkan', output: 'out/vulkan', xmlName: 'vk.xml', lightColor: 91, darkColor: 31, features: [
		// 	'VK_VERSION_1_0',
		// 	'VK_VERSION_1_1',
		// 	'VK_VERSION_1_2',
		// 	'VK_VERSION_1_3',
		// ], haxeName: 'Vulkan'}
	];

	final die:String = '\033[0m';

	var data:Thingy;

	var lightColor:String;
	var darkColor:String;

	public function new(data:Thingy) {
		lightColor = '\033[0;${data.lightColor}m';
		darkColor = '\033[0;${data.darkColor}m';

		Sys.println('running generator for ${lightColor}${data.name}$die');

		var xml:Xml = Xml.parse(getContent(data.xmlName)).firstElement();

		var requiredFunctions:Array<String> = [];
		var requiredEnums:Array<String> = [];

		// get all enums and functions in the featurrijefwdonmofkclfec

		for (featureSetSet in xml.elementsNamed('feature')) {
			if (!data.features.contains(featureSetSet.get('name'))) continue;

			for (featureSet in featureSetSet.elementsNamed('require')) {
				for (feature in featureSet.elements()) {
					switch (feature.nodeName) {
					 	case 'enum': requiredEnums.push(feature.get('name'));
					 	case 'command': requiredFunctions.push(feature.get('name'));
					}
				} 
			}

			for (featureSet in featureSetSet.elementsNamed('remove')) {
				for (feature in featureSet.elements()) {
					switch (feature.nodeName) {
					 	case 'enum': requiredEnums.remove(feature.get('name'));
					 	case 'command': requiredFunctions.remove(feature.get('name'));
					}
				} 
			}
		}

		var haxeFile:StringBuf = new StringBuf();
		var cFile:StringBuf = new StringBuf();

		cFile.add(new haxe.Template(getContent('templateC.txt')).execute({includeFile: 'glad/${data.name}.h', includeFileDefine: data.defineName, primName: data.name}));
		haxeFile.add(new haxe.Template(getContent('templateHaxe.txt')).execute({primName: data.name + '_', haxeName: data.haxeName}));

		if (data.appendFile != null) {
			cFile.add('\n');
			cFile.add(getContent(data.appendFile + '.c'));
		}

		cFile.add('\n\n\n');

		// enums

		for (enumList in xml.elementsNamed('enums')) {
			for (enumEntry in enumList.elementsNamed('enum')) {
				if (!requiredEnums.contains(enumEntry.get('name'))) continue;
				haxeFile.add('\tpublic static final ${enumEntry.get('name')}:Int = ${enumEntry.get('value')};\n');
			}
		}

		haxeFile.add('\n');


		// commands

		var commands:StringBuf = new StringBuf();
		var prims:StringBuf = new StringBuf();

		for (command in xml.elementsNamed('commands').next().elements()) {
			var proto = command.elementsNamed('proto').next();
			var name = proto.elementsNamed('name').next().firstChild().nodeValue;

			if (!requiredFunctions.contains(name) /* || data.exclude.match(name) */) continue;

			var jaxeReturn:String = '';
			var typeThing:StringBuf = new StringBuf();
			for (func in proto.iterator()) {
				if (func.nodeType == Xml.Element) {
					switch (func.nodeName) {
						case 'ptype':
							typeThing.add(func.firstChild().nodeValue);
						case 'name': 
							var typeStr = typeThing.toString();
							typeStr = typeStr.replace('const', '');
							typeStr = typeStr.ltrim();
							typeThing = new StringBuf();
							haxeFile.add('\tpublic static function ');
							haxeFile.add(func.firstChild().nodeValue);

							prims.add('DEFINE_PRIM(');

							commands.add('HL_PRIM ');

							prims.add(typeMap[typeStr.rtrim()]);
							prims.add(', ');
							prims.add('PRIM_NAME(');
							prims.add(camelToSnake(func.firstChild().nodeValue));
							prims.add(')');

							commands.add(typeStr);
							commands.add('FUNC_NAME(');
							commands.add(camelToSnake(func.firstChild().nodeValue));
							commands.add(')');

							jaxeReturn = haxeTypeMap[typeStr.rtrim()];

					}
					continue;
				} else typeThing.add(func.nodeValue);
			}

			commands.add('(');


			var params = [];

			typeThing = new StringBuf();

			var iter = command.elementsNamed('param');
			for (param in iter) {
				for (func in param.iterator()) {
					if (func.nodeType == Xml.Element) {
						switch (func.nodeName) {
							case 'ptype':
								typeThing.add(func.firstChild().nodeValue);
							case 'name': 
								var typeStr:String = typeThing.toString();
								typeStr = typeStr.replace('const', '');
								typeStr = typeStr.ltrim();

								if (argumentMap.exists(typeStr.rtrim())) commands.add(argumentMap[typeStr.rtrim()]);
								else commands.add(typeStr);
								commands.add(func.firstChild().nodeValue);
								if (iter.hasNext()) commands.add(', ');

								params.push([typeStr.rtrim(), func.firstChild().nodeValue]);

								// if (!typeMap.exists(typeStr.rtrim())) trace(typeStr.rtrim());
								typeThing = new StringBuf();
						}
						continue;
					} else typeThing.add(func.nodeValue);

				}
				typeThing = new StringBuf();
			}

			prims.add(', ');

			if (params.length == 0)
				prims.add('_NO_ARG');
			else
				prims.add(params.map((arr) -> return typeMap[arr[0]]).join(' '));

			commands.add(') {\n');

			var functionBody:StringBuf = new StringBuf();

			var killMe:Array<String> = [
				for (param in params) 
					if (fuckFuckFUckFUCkFUCK.exists(param[0])) 
						fuckFuckFUckFUCkFUCK[param[0]](functionBody, param[1])
					else
						param[1]
			];

			var hjaxeParams:Array<String> = params.map((arr) -> return arr[1] + ':' + haxeTypeMap[arr[0]]);

			haxeFile.add('(');
			haxeFile.add(hjaxeParams.join(', '));
			haxeFile.add('):');
			haxeFile.add(jaxeReturn);
			haxeFile.add(' ');
			haxeFile.add(haxeReturnMap[jaxeReturn]);

			commands.add(functionBody);
			commands.add('\t');
			commands.add('return $name(');
			commands.add(killMe.join(', '));
			commands.add(');');
			commands.add('\n}');
			commands.add('\n\n');

			prims.add(');\n');
			haxeFile.add('\n');

		}

		haxeFile.add('}');

		cFile.add(commands);
		cFile.add(prims);

		sys.io.File.saveContent(data.output + '.c', cFile.toString());
		sys.io.File.saveContent(data.output + '.hx', haxeFile.toString());

		// Sys.println(cFile.toString());
		// Sys.println(commands.toString());
		// Sys.println(prims.toString());

		// createProgressBar(Sys.stdout(), 0.5, 10, true);

	}

	inline function camelToSnake(key:String)
		return ~/([A-Z])/g.replace(key, '_$1').toLowerCase();

	static public function main() for (thing in thingies) new GLADGenetator(thing);


	private function createProgressBar(output:Output, percentage:Float, length:Int, end:Bool) {
		output.writeString('\r');
		output.writeString('[');

		var progress = percentage * length;
		for (i in 0...length)
			output.writeString((i < progress ? '${lightColor}█$die' : '${darkColor}░$die'));

		output.writeString(']');

		output.writeString(' ${Math.round(percentage * 100)}%');
		if (end) output.writeString('\n');
		output.flush();
	}
}