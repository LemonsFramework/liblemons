package tests;

import utest.Assert;
import utest.Async;

typedef SoundThing = hl.Abstract<"LemonsSound*">;

class TestSound extends utest.Test {
	var sound:SoundThing;

	public function setup() {
		var soundData = sys.io.File.getBytes('../res/vorbisTest.ogg');
		sound = createFromOgg(soundData, soundData.length);
	}

	public function testOggRead() {
		var sampleRate = 0;
		var channels = 0;
		soundGetData(sound, sampleRate, channels);

		Assert.equals(44100, sampleRate, 'failed to get sample rate');
		Assert.equals(2, channels, 'failed to get channel count');

		var expectedOutput:Array<String> = ['ARTIST=plankdev', 'ENCODER=FL Studio', 'TITLE=PASSPO~4.MID [Passport Please S-YXG2006LE Rearrange]'];
		var output:Array<String> = [];

		var arr:hl.NativeArray<hl.Bytes> = soundGetComments(sound);
		for (val in arr) output.push(@:privateAccess String.fromUTF8(val));

		Assert.same(expectedOutput, output, false, 'failed to get ogg comments');
	}

	public function teardown() {
		sound = null;
	}

	@:hlNative("lemons", "sound_create_from_ogg") static function createFromOgg(bytes:hl.Bytes, length:Int):SoundThing {return null;}
	@:hlNative("lemons", "sound_seek") static function soundSeek(snd:SoundThing, pos:Int):Void {}
	@:hlNative("lemons", "sound_read") static function soundRead(snd:SoundThing, out:hl.Bytes, length:Int):Int { return 0; }
	@:hlNative("lemons", "sound_get_data") static function soundGetData(snd:SoundThing, sampleRate:hl.Ref<Int>, channels:hl.Ref<Int>):Void {}
	@:hlNative("lemons", "sound_get_comments") static function soundGetComments(snd:SoundThing):hl.NativeArray<hl.Bytes> { return null; }
}

