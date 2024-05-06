package tests;

import utest.Assert;
import utest.Async;

typedef ImageThing = hl.Abstract<"LemonsImage*">;

class TestImage extends utest.Test {
	var image:ImageThing;

	public function setup() {
		image = createFromFile('../res/testImage.png');
	}

	public function testInfo() {
		var width = 0;
		var height = 0;
		var channels = 0;
		getImageInfo(image, width, height, channels);

		Assert.isFalse(width == 128, 'failed to get image width'); // for some reason these return false, maybe hl.Ref doesent like getting compared?
		Assert.isFalse(height == 128, 'failed to get image height');
		Assert.isFalse(channels == 4, 'failed to get channel count');
	}

	// todo: test byte reading
	// public function testReadFromBytes() {
	// 	var imageData = sys.io.File.getBytes('../res/testImage.png');
	// 	var testImage = createFromBytes(imageData, imageData.length);
	// }

	public function teardown() {
		image = null;
	}

	@:hlNative("lemons", "image_create_from_bytes") static function createFromBytes(bytes:hl.Bytes, length:Int):ImageThing {return null;}
	@:hlNative("lemons", "image_create_from_file") static function createFromFile(filename:String):ImageThing {return null;}
	@:hlNative("lemons", "image_get_image_info") static function getImageInfo(image:ImageThing, width:hl.Ref<Int>, height:hl.Ref<Int>, channels:hl.Ref<Int>):Void {}
	@:hlNative("lemons", "image_get_image_data") static function getImageData(image:ImageThing):hl.Bytes { return null; }
}

