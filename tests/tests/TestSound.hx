package tests;

import utest.Assert;
import utest.Async;

typedef SoundThing = hl.Abstract<"LemonsSound*">;

class TestSound extends utest.Test {
	public function testOggRead() {
		var soundData = sys.io.File.getBytes('../res/vorbisTest.ogg');
		var sound:SoundThing = createFromOgg(soundData, soundData.length);

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

		soundData = null;
		sound = null;
		hl.Gc.major();
	}

	public function testFlacRead() {
		var soundData = sys.io.File.getBytes('../res/flacTest.flac');
		var sound:SoundThing = createFromFlac(soundData, soundData.length);

		var sampleRate = 0;
		var channels = 0;
		soundGetData(sound, sampleRate, channels);

		Assert.equals(44100, sampleRate, 'failed to get sample rate');
		Assert.equals(2, channels, 'failed to get channel count');

		var expectedOutput:Array<String> = ['ENCODER=FL Studio', 'TITLE=PASSPO~4.MID [Passport Please S-YXG2006LE Rearrange]', 'GENRE=\x00', 'ARTIST=plankdev', 'COMMENTS=', 'CONTACT=https://twitter.com/_PlankDev']; // why the null byte?
		var output:Array<String> = [];

		var arr:hl.NativeArray<hl.Bytes> = soundGetComments(sound);
		for (val in arr) output.push(@:privateAccess String.fromUTF8(val));

		Assert.same(expectedOutput, output, false, 'failed to get ogg-style comments');

		soundData = null;
		sound = null;
		hl.Gc.major();
	}

	// for some reason this makes either the flac or ogg test fail due to a access violation when creating haxe.io.Bytes, OOM issue?

	/*
	public function testWavRead() {
		var soundData = sys.io.File.getBytes('../res/wavTest.wav');
		var sound:SoundThing = createFromWav(soundData, soundData.length);

		var sampleRate = 0;
		var channels = 0;
		soundGetData(sound, sampleRate, channels);

		Assert.equals(44100, sampleRate, 'failed to get sample rate');
		Assert.equals(2, channels, 'failed to get channel count');

		soundData = null;
		sound = null;
		hl.Gc.major();
	}
	*/

	@:hlNative("lemons", "sound_create_from_ogg") static function createFromOgg(bytes:hl.Bytes, length:Int):SoundThing {return null;}
	@:hlNative("lemons", "sound_create_from_flac") static function createFromFlac(bytes:hl.Bytes, length:Int):SoundThing {return null;}
	@:hlNative("lemons", "sound_create_from_wav") static function createFromWav(bytes:hl.Bytes, length:Int):SoundThing {return null;}
	@:hlNative("lemons", "sound_seek") static function soundSeek(snd:SoundThing, pos:Int):Void {}
	@:hlNative("lemons", "sound_read") static function soundRead(snd:SoundThing, out:hl.Bytes, length:Int):Int { return 0; }
	@:hlNative("lemons", "sound_get_data") static function soundGetData(snd:SoundThing, sampleRate:hl.Ref<Int>, channels:hl.Ref<Int>):Void {}
	@:hlNative("lemons", "sound_get_comments") static function soundGetComments(snd:SoundThing):hl.NativeArray<hl.Bytes> { return null; }
}

