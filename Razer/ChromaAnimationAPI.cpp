#include "ChromaAnimationAPI.h"
#include "UnicodeChromaAnimationAPI.h"
#include "ChromaLogger.h"
#include "VerifyLibrarySignature.h"
#include <iostream>
#include <tchar.h>


using namespace std;
using namespace ChromaSDK::Implementation;

namespace ChromaSDK {

	bool ChromaAnimationAPI::_sIsInitializedAPI = false;
	bool ChromaAnimationAPI::_sInitialized = false;
	std::string ChromaAnimationAPI::_sResultGetAnimationName = "";

	int ChromaAnimationAPI::InitAPI()
	{
		if (_sIsInitializedAPI)
		{
			return RZRESULT_SUCCESS;
		}

		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}

		RZRESULT result = UnicodeChromaAnimationAPI::InitAPI();
		if (result == RZRESULT_SUCCESS)
		{
			_sIsInitializedAPI = true;
		}
		return result;
	}

	bool ChromaAnimationAPI::GetIsInitializedAPI()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::GetIsInitializedAPI();
	}

	int ChromaAnimationAPI::UninitAPI()
	{
		if (!_sIsInitializedAPI)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::UninitAPI();
		if (result == RZRESULT_SUCCESS)
		{
			_sIsInitializedAPI = false;
		}
		return UnicodeChromaAnimationAPI::UninitAPI();
	}

#pragma region API declare prototypes

	/*
		Return the sum of colors
	*/
	int ChromaAnimationAPI::AddColor(const int color1, const int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::AddColor(color1, color2);
	}
	/*
		Adds a frame to the `Chroma` animation and sets the `duration` (in seconds).
		The `color` is expected to be an array of the dimensions for the `deviceType/device`.
		The `length` parameter is the size of the `color` array. For `EChromaSDKDevice1DEnum`
		the array size should be `MAX LEDS`. For `EChromaSDKDevice2DEnum` the array
		size should be `MAX ROW` times `MAX COLUMN`. Returns the animation id upon
		success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::AddFrame(int animationId, float duration, int* colors, int length)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::AddFrame(animationId, duration, colors, length);
	}
	/*
		Add source color to target where color is not black for frame id, reference
		source and target by id.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Add source color to target where color is not black for all frames, reference
		source and target by id.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Add source color to target where color is not black for all frames, reference
		source and target by name.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFramesNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		Add source color to target where color is not black for all frames starting
		at offset for the length of the source, reference source and target by
		id.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Add source color to target where color is not black for all frames starting
		at offset for the length of the source, reference source and target by
		name.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffsetName(const char* sourceAnimation, const char* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		Add source color to target where color is not black for frame id, reference
		source and target by name.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysName(const char* sourceAnimation, const char* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId);
	}
	/*
		Add source color to target where color is not black for the source frame
		and target offset frame, reference source and target by id.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Add source color to target where color is not black for the source frame
		and target offset frame, reference source and target by name.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysOffsetName(const char* sourceAnimation, const char* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroAllKeysOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::AddNonZeroAllKeysOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		Add source color to target where the target color is not black for all frames,
		reference source and target by id.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Add source color to target where the target color is not black for all frames,
		reference source and target by name.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		Add source color to target where the target color is not black for all frames
		starting at offset for the length of the source, reference source and target
		by id.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Add source color to target where the target color is not black for all frames
		starting at offset for the length of the source, reference source and target
		by name.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffsetName(const char* sourceAnimation, const char* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		Add source color to target where target color is not blank from the source
		frame to the target offset frame, reference source and target by id.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Add source color to target where target color is not blank from the source
		frame to the target offset frame, reference source and target by name.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysOffsetName(const char* sourceAnimation, const char* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroTargetAllKeysOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		Append all source frames to the target animation, reference source and target
		by id.
	*/
	void ChromaAnimationAPI::AppendAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AppendAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Append all source frames to the target animation, reference source and target
		by name.
	*/
	void ChromaAnimationAPI::AppendAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::AppendAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AppendAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::AppendAllFramesNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		`PluginClearAll` will issue a `CLEAR` effect for all devices.
	*/
	void ChromaAnimationAPI::ClearAll()
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ClearAll();
	}
	/*
		`PluginClearAnimationType` will issue a `CLEAR` effect for the given device.
	*/
	void ChromaAnimationAPI::ClearAnimationType(int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ClearAnimationType(deviceType, device);
	}
	/*
		`PluginCloseAll` closes all open animations so they can be reloaded from
		disk. The set of animations will be stopped if playing.
	*/
	void ChromaAnimationAPI::CloseAll()
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CloseAll();
	}
	/*
		Closes the `Chroma` animation to free up resources referenced by id. Returns
		the animation id upon success. Returns negative one upon failure. This
		might be used while authoring effects if there was a change necessitating
		re-opening the animation. The animation id can no longer be used once closed.
	*/
	int ChromaAnimationAPI::CloseAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CloseAnimation(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CloseAnimationD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CloseAnimationD(animationId);
	}
	/*
		Closes the `Chroma` animation referenced by name so that the animation can
		be reloaded from disk.
	*/
	void ChromaAnimationAPI::CloseAnimationName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::CloseAnimationName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CloseAnimationNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::CloseAnimationNameD(wstr_Path.c_str());
	}
	/*
		`PluginCloseComposite` closes a set of animations so they can be reloaded
		from disk. The set of animations will be stopped if playing.
	*/
	void ChromaAnimationAPI::CloseComposite(const char* name)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Name = name;
		wstring wstr_Name(str_Name.begin(), str_Name.end());
		UnicodeChromaAnimationAPI::CloseComposite(wstr_Name.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CloseCompositeD(const char* name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Name = name;
		wstring wstr_Name(str_Name.begin(), str_Name.end());
		return UnicodeChromaAnimationAPI::CloseCompositeD(wstr_Name.c_str());
	}
	/*
		Copy source animation to target animation for the given frame. Source and
		target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Copy source animation to target animation for the given frame. Source and
		target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyAllKeysName(const char* sourceAnimation, const char* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyAllKeysName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId);
	}
	/*
		Copy animation to named target animation in memory. If target animation
		exists, close first. Source is referenced by id.
	*/
	int ChromaAnimationAPI::CopyAnimation(int sourceAnimationId, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyAnimation(sourceAnimationId, wstr_TargetAnimation.c_str());
	}
	/*
		Copy animation to named target animation in memory. If target animation
		exists, close first. Source is referenced by name.
	*/
	void ChromaAnimationAPI::CopyAnimationName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyAnimationName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyAnimationNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyAnimationNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		Copy blue channel to other channels for all frames. Intensity range is 0.0
		to 1.0. Reference the animation by id.
	*/
	void ChromaAnimationAPI::CopyBlueChannelAllFrames(int animationId, float redIntensity, float greenIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyBlueChannelAllFrames(animationId, redIntensity, greenIntensity);
	}
	/*
		Copy blue channel to other channels for all frames. Intensity range is 0.0
		to 1.0. Reference the animation by name.
	*/
	void ChromaAnimationAPI::CopyBlueChannelAllFramesName(const char* path, float redIntensity, float greenIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::CopyBlueChannelAllFramesName(wstr_Path.c_str(), redIntensity, greenIntensity);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyBlueChannelAllFramesNameD(const char* path, double redIntensity, double greenIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::CopyBlueChannelAllFramesNameD(wstr_Path.c_str(), redIntensity, greenIntensity);
	}
	/*
		Copy green channel to other channels for all frames. Intensity range is
		0.0 to 1.0. Reference the animation by id.
	*/
	void ChromaAnimationAPI::CopyGreenChannelAllFrames(int animationId, float redIntensity, float blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyGreenChannelAllFrames(animationId, redIntensity, blueIntensity);
	}
	/*
		Copy green channel to other channels for all frames. Intensity range is
		0.0 to 1.0. Reference the animation by name.
	*/
	void ChromaAnimationAPI::CopyGreenChannelAllFramesName(const char* path, float redIntensity, float blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::CopyGreenChannelAllFramesName(wstr_Path.c_str(), redIntensity, blueIntensity);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyGreenChannelAllFramesNameD(const char* path, double redIntensity, double blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::CopyGreenChannelAllFramesNameD(wstr_Path.c_str(), redIntensity, blueIntensity);
	}
	/*
		Copy animation key color from the source animation to the target animation
		for the given frame. Reference the source and target by id.
	*/
	void ChromaAnimationAPI::CopyKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeyColor(sourceAnimationId, targetAnimationId, frameId, rzkey);
	}
	/*
		Copy animation key color from the source animation to the target animation
		for all frames. Reference the source and target by id.
	*/
	void ChromaAnimationAPI::CopyKeyColorAllFrames(int sourceAnimationId, int targetAnimationId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeyColorAllFrames(sourceAnimationId, targetAnimationId, rzkey);
	}
	/*
		Copy animation key color from the source animation to the target animation
		for all frames. Reference the source and target by name.
	*/
	void ChromaAnimationAPI::CopyKeyColorAllFramesName(const char* sourceAnimation, const char* targetAnimation, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyKeyColorAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), rzkey);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyKeyColorAllFramesNameD(const char* sourceAnimation, const char* targetAnimation, double rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyKeyColorAllFramesNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), rzkey);
	}
	/*
		Copy animation key color from the source animation to the target animation
		for all frames, starting at the offset for the length of the source animation.
		Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyKeyColorAllFramesOffset(int sourceAnimationId, int targetAnimationId, int rzkey, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeyColorAllFramesOffset(sourceAnimationId, targetAnimationId, rzkey, offset);
	}
	/*
		Copy animation key color from the source animation to the target animation
		for all frames, starting at the offset for the length of the source animation.
		Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyKeyColorAllFramesOffsetName(const char* sourceAnimation, const char* targetAnimation, int rzkey, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyKeyColorAllFramesOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), rzkey, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyKeyColorAllFramesOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double rzkey, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyKeyColorAllFramesOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), rzkey, offset);
	}
	/*
		Copy animation key color from the source animation to the target animation
		for the given frame.
	*/
	void ChromaAnimationAPI::CopyKeyColorName(const char* sourceAnimation, const char* targetAnimation, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyKeyColorName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, rzkey);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyKeyColorNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyKeyColorNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, rzkey);
	}
	/*
		Copy animation color for a set of keys from the source animation to the
		target animation for the given frame. Reference the source and target by
		id.
	*/
	void ChromaAnimationAPI::CopyKeysColor(int sourceAnimationId, int targetAnimationId, int frameId, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeysColor(sourceAnimationId, targetAnimationId, frameId, keys, size);
	}
	/*
		Copy animation color for a set of keys from the source animation to the
		target animation for all frames. Reference the source and target by id.
	*/
	void ChromaAnimationAPI::CopyKeysColorAllFrames(int sourceAnimationId, int targetAnimationId, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeysColorAllFrames(sourceAnimationId, targetAnimationId, keys, size);
	}
	/*
		Copy animation color for a set of keys from the source animation to the
		target animation for all frames. Reference the source and target by name.
	*/
	void ChromaAnimationAPI::CopyKeysColorAllFramesName(const char* sourceAnimation, const char* targetAnimation, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyKeysColorAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), keys, size);
	}
	/*
		Copy animation color for a set of keys from the source animation to the
		target animation for the given frame. Reference the source and target by
		name.
	*/
	void ChromaAnimationAPI::CopyKeysColorName(const char* sourceAnimation, const char* targetAnimation, int frameId, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyKeysColorName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, keys, size);
	}
	/*
		Copy animation color for a set of keys from the source animation to the
		target animation from the source frame to the target frame. Reference the
		source and target by id.
	*/
	void ChromaAnimationAPI::CopyKeysColorOffset(int sourceAnimationId, int targetAnimationId, int sourceFrameId, int targetFrameId, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeysColorOffset(sourceAnimationId, targetAnimationId, sourceFrameId, targetFrameId, keys, size);
	}
	/*
		Copy animation color for a set of keys from the source animation to the
		target animation from the source frame to the target frame. Reference the
		source and target by name.
	*/
	void ChromaAnimationAPI::CopyKeysColorOffsetName(const char* sourceAnimation, const char* targetAnimation, int sourceFrameId, int targetFrameId, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyKeysColorOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), sourceFrameId, targetFrameId, keys, size);
	}
	/*
		Copy source animation to target animation for the given frame. Source and
		target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Copy nonzero colors from a source animation to a target animation for all
		frames. Reference source and target by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Copy nonzero colors from a source animation to a target animation for all
		frames. Reference source and target by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFramesNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		Copy nonzero colors from a source animation to a target animation for all
		frames starting at the offset for the length of the source animation. The
		source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Copy nonzero colors from a source animation to a target animation for all
		frames starting at the offset for the length of the source animation. The
		source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffsetName(const char* sourceAnimation, const char* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		Copy nonzero colors from source animation to target animation for the specified
		frame. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysName(const char* sourceAnimation, const char* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroAllKeysNameD(const char* sourceAnimation, const char* targetAnimation, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyNonZeroAllKeysNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId);
	}
	/*
		Copy nonzero colors from the source animation to the target animation from
		the source frame to the target offset frame. Source and target are referenced
		by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Copy nonzero colors from the source animation to the target animation from
		the source frame to the target offset frame. Source and target are referenced
		by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysOffsetName(const char* sourceAnimation, const char* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroAllKeysOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyNonZeroAllKeysOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		Copy animation key color from the source animation to the target animation
		for the given frame where color is not zero.
	*/
	void ChromaAnimationAPI::CopyNonZeroKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroKeyColor(sourceAnimationId, targetAnimationId, frameId, rzkey);
	}
	/*
		Copy animation key color from the source animation to the target animation
		for the given frame where color is not zero.
	*/
	void ChromaAnimationAPI::CopyNonZeroKeyColorName(const char* sourceAnimation, const char* targetAnimation, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyNonZeroKeyColorName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, rzkey);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroKeyColorNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyNonZeroKeyColorNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, rzkey);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where
		the target color is nonzero for the specified frame. Source and target
		are referenced by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where
		the target color is nonzero for all frames. Source and target are referenced
		by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where
		the target color is nonzero for all frames. Source and target are referenced
		by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		Copy nonzero colors from the source animation to the target animation where
		the target color is nonzero for all frames. Source and target are referenced
		by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where
		the target color is nonzero for all frames starting at the target offset
		for the length of the source animation. Source and target animations are
		referenced by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffsetName(const char* sourceAnimation, const char* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where
		the target color is nonzero for the specified frame. The source and target
		are referenced by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysName(const char* sourceAnimation, const char* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroTargetAllKeysNameD(const char* sourceAnimation, const char* targetAnimation, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where
		the target color is nonzero for the specified source frame and target offset
		frame. The source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where
		the target color is nonzero for the specified source frame and target offset
		frame. The source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysOffsetName(const char* sourceAnimation, const char* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroTargetAllKeysOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where
		the target color is zero for all frames. Source and target are referenced
		by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where
		the target color is zero for all frames. Source and target are referenced
		by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFramesNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		Copy red channel to other channels for all frames. Intensity range is 0.0
		to 1.0. Reference the animation by id.
	*/
	void ChromaAnimationAPI::CopyRedChannelAllFrames(int animationId, float greenIntensity, float blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyRedChannelAllFrames(animationId, greenIntensity, blueIntensity);
	}
	/*
		Copy green channel to other channels for all frames. Intensity range is
		0.0 to 1.0. Reference the animation by name.
	*/
	void ChromaAnimationAPI::CopyRedChannelAllFramesName(const char* path, float greenIntensity, float blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::CopyRedChannelAllFramesName(wstr_Path.c_str(), greenIntensity, blueIntensity);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyRedChannelAllFramesNameD(const char* path, double greenIntensity, double blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::CopyRedChannelAllFramesNameD(wstr_Path.c_str(), greenIntensity, blueIntensity);
	}
	/*
		Copy zero colors from source animation to target animation for the frame.
		Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Copy zero colors from source animation to target animation for all frames.
		Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Copy zero colors from source animation to target animation for all frames.
		Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyZeroAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFramesNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		Copy zero colors from source animation to target animation for all frames
		starting at the target offset for the length of the source animation. Source
		and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Copy zero colors from source animation to target animation for all frames
		starting at the target offset for the length of the source animation. Source
		and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysAllFramesOffsetName(const char* sourceAnimation, const char* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFramesOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyZeroAllKeysAllFramesOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFramesOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		Copy zero colors from source animation to target animation for the frame.
		Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysName(const char* sourceAnimation, const char* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyZeroAllKeysName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId);
	}
	/*
		Copy zero colors from source animation to target animation for the frame
		id starting at the target offset for the length of the source animation.
		Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Copy zero colors from source animation to target animation for the frame
		id starting at the target offset for the length of the source animation.
		Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysOffsetName(const char* sourceAnimation, const char* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyZeroAllKeysOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		Copy zero key color from source animation to target animation for the specified
		frame. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroKeyColor(sourceAnimationId, targetAnimationId, frameId, rzkey);
	}
	/*
		Copy zero key color from source animation to target animation for the specified
		frame. Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroKeyColorName(const char* sourceAnimation, const char* targetAnimation, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyZeroKeyColorName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, rzkey);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyZeroKeyColorNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyZeroKeyColorNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, rzkey);
	}
	/*
		Copy nonzero color from source animation to target animation where target
		is zero for the frame. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroTargetAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroTargetAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Copy nonzero color from source animation to target animation where target
		is zero for all frames. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroTargetAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Copy nonzero color from source animation to target animation where target
		is zero for all frames. Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroTargetAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyZeroTargetAllKeysAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyZeroTargetAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::CopyZeroTargetAllKeysAllFramesNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		Copy nonzero color from source animation to target animation where target
		is zero for the frame. Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroTargetAllKeysName(const char* sourceAnimation, const char* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::CopyZeroTargetAllKeysName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateChromaLinkEffect(ChromaSDK::ChromaLink::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateChromaLinkEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateEffect(RZDEVICEID deviceId, ChromaSDK::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateEffect(deviceId, effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateHeadsetEffect(ChromaSDK::Headset::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateHeadsetEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateKeyboardEffect(ChromaSDK::Keyboard::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateKeyboardEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateKeypadEffect(ChromaSDK::Keypad::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateKeypadEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateMouseEffect(ChromaSDK::Mouse::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateMouseEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateMousepadEffect(ChromaSDK::Mousepad::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateMousepadEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreDeleteEffect(RZEFFECTID effectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreDeleteEffect(effectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreInit()
	{
		if (!_sIsInitializedAPI)
		{
			RZRESULT result = InitAPI();
			if (result != RZRESULT_SUCCESS)
			{
				return result;
			}
			if (!_sIsInitializedAPI)
			{
				return static_cast<RZRESULT>(RZRESULT_FAILED);
			}
		}
		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::CoreInit();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = true;
		}
		return result;
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreInitSDK(ChromaSDK::APPINFOTYPE* appInfo)
	{
		if (!_sIsInitializedAPI)
		{
			RZRESULT result = InitAPI();
			if (result != RZRESULT_SUCCESS)
			{
				return result;
			}
			if (!_sIsInitializedAPI)
			{
				return static_cast<RZRESULT>(RZRESULT_FAILED);
			}
		}
		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::CoreInitSDK(appInfo);
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = true;
		}
		return result;
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreIsActive(BOOL& active)
	{
		if (!_sIsInitializedAPI)
		{
			active = false;
			return -1;
		}
		if (!_sInitialized)
		{
			active = false;
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreIsActive(active);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreIsConnected(ChromaSDK::DEVICE_INFO_TYPE& deviceInfo)
	{
		if (!_sIsInitializedAPI)
		{
			deviceInfo.Connected = false;
			return -1;
		}
		if (!_sInitialized)
		{
			deviceInfo.Connected = false;
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreIsConnected(deviceInfo);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreQueryDevice(RZDEVICEID deviceId, ChromaSDK::DEVICE_INFO_TYPE& deviceInfo)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreQueryDevice(deviceId, deviceInfo);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreSetEffect(RZEFFECTID effectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreSetEffect(effectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreSetEventName(const wchar_t* name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreSetEventName(name);
	}
	/*
		Begin broadcasting Chroma RGB data using the stored stream key as the endpoint.
		Intended for Cloud Gaming Platforms, restore the streaming key when the
		game instance is launched to continue streaming. streamId is a null terminated
		string streamKey is a null terminated string StreamGetStatus() should return
		the READY status to use this method.
	*/
	bool ChromaAnimationAPI::CoreStreamBroadcast(const char* streamId, const char* streamKey)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamBroadcast(streamId, streamKey);
	}
	/*
		End broadcasting Chroma RGB data. StreamGetStatus() should return the BROADCASTING
		status to use this method.
	*/
	bool ChromaAnimationAPI::CoreStreamBroadcastEnd()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamBroadcastEnd();
	}
	/*
		shortcode: Pass the address of a preallocated character buffer to get the
		streaming auth code. The buffer should have a minimum length of 6. length:
		Length will return as zero if the streaming auth code could not be obtained.
		If length is greater than zero, it will be the length of the returned streaming
		auth code. Once you have the shortcode, it should be shown to the user
		so they can associate the stream with their Razer ID StreamGetStatus()
		should return the READY status before invoking this method. platform: is
		the null terminated string that identifies the source of the stream: {
		GEFORCE_NOW, LUNA, STADIA, GAME_PASS } title: is the null terminated string
		that identifies the application or game.
	*/
	void ChromaAnimationAPI::CoreStreamGetAuthShortcode(char* shortcode, unsigned char* length, const wchar_t* platform, const wchar_t* title)
	{
		if (!_sIsInitializedAPI)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		if (!_sInitialized)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		UnicodeChromaAnimationAPI::CoreStreamGetAuthShortcode(shortcode, length, platform, title);
	}
	/*
		focus: Pass the address of a preallocated character buffer to get the stream
		focus. The buffer should have a length of 48 length: Length will return
		as zero if the stream focus could not be obtained. If length is greater
		than zero, it will be the length of the returned stream focus.
	*/
	bool ChromaAnimationAPI::CoreStreamGetFocus(char* focus, unsigned char* length)
	{
		if (!_sIsInitializedAPI)
		{
			if (length)
			{
				*length = 0;
			}
			return false;
		}
		if (!_sInitialized)
		{
			if (length)
			{
				*length = 0;
			}
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamGetFocus(focus, length);
	}
	/*
		Intended for Cloud Gaming Platforms, store the stream id to persist in user
		preferences to continue streaming if the game is suspended or closed. shortcode:
		The shortcode is a null terminated string. Use the shortcode that authorized
		the stream to obtain the stream id. streamId should be a preallocated buffer
		to get the stream key. The buffer should have a length of 48. length: Length
		will return zero if the key could not be obtained. If the length is greater
		than zero, it will be the length of the returned streaming id. Retrieve
		the stream id after authorizing the shortcode. The authorization window
		will expire in 5 minutes. Be sure to save the stream key before the window
		expires. StreamGetStatus() should return the READY status to use this method.
	*/
	void ChromaAnimationAPI::CoreStreamGetId(const char* shortcode, char* streamId, unsigned char* length)
	{
		if (!_sIsInitializedAPI)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		if (!_sInitialized)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		UnicodeChromaAnimationAPI::CoreStreamGetId(shortcode, streamId, length);
	}
	/*
		Intended for Cloud Gaming Platforms, store the streaming key to persist
		in user preferences to continue streaming if the game is suspended or closed.
		shortcode: The shortcode is a null terminated string. Use the shortcode
		that authorized the stream to obtain the stream key. If the status is in
		the BROADCASTING or WATCHING state, passing a NULL shortcode will return
		the active streamId. streamKey should be a preallocated buffer to get the
		stream key. The buffer should have a length of 48. length: Length will
		return zero if the key could not be obtained. If the length is greater
		than zero, it will be the length of the returned streaming key. Retrieve
		the stream key after authorizing the shortcode. The authorization window
		will expire in 5 minutes. Be sure to save the stream key before the window
		expires. StreamGetStatus() should return the READY status to use this method.
	*/
	void ChromaAnimationAPI::CoreStreamGetKey(const char* shortcode, char* streamKey, unsigned char* length)
	{
		if (!_sIsInitializedAPI)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		if (!_sInitialized)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		UnicodeChromaAnimationAPI::CoreStreamGetKey(shortcode, streamKey, length);
	}
	/*
		Returns StreamStatus, the current status of the service
	*/
	ChromaSDK::Stream::StreamStatusType ChromaAnimationAPI::CoreStreamGetStatus()
	{
		if (!_sIsInitializedAPI)
		{
			return ChromaSDK::Stream::StreamStatusType::SERVICE_OFFLINE;
		}
		if (!_sInitialized)
		{
			return ChromaSDK::Stream::StreamStatusType::SERVICE_OFFLINE;
		}
		return UnicodeChromaAnimationAPI::CoreStreamGetStatus();
	}
	/*
		Convert StreamStatusType to a printable string
	*/
	const char* ChromaAnimationAPI::CoreStreamGetStatusString(ChromaSDK::Stream::StreamStatusType status)
	{
		if (!_sIsInitializedAPI)
		{
			return "SERVICE_OFFLINE";
		}
		if (!_sInitialized)
		{
			return "SERVICE_OFFLINE";
		}
		return UnicodeChromaAnimationAPI::CoreStreamGetStatusString(status);
	}
	/*
		This prevents the stream id and stream key from being obtained through the
		shortcode. This closes the auth window. shortcode is a null terminated
		string. StreamGetStatus() should return the READY status to use this method.
		returns success when shortcode has been released
	*/
	bool ChromaAnimationAPI::CoreStreamReleaseShortcode(const char* shortcode)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamReleaseShortcode(shortcode);
	}
	/*
		The focus is a null terminated string. Set the focus identifer for the application
		designated to automatically change the streaming state. Returns true on
		success.
	*/
	bool ChromaAnimationAPI::CoreStreamSetFocus(const char* focus)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamSetFocus(focus);
	}
	/*
		Returns true if the Chroma streaming is supported. If false is returned,
		avoid calling stream methods.
	*/
	bool ChromaAnimationAPI::CoreStreamSupportsStreaming()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamSupportsStreaming();
	}
	/*
		Begin watching the Chroma RGB data using streamID parameter. streamId is
		a null terminated string. StreamGetStatus() should return the READY status
		to use this method.
	*/
	bool ChromaAnimationAPI::CoreStreamWatch(const char* streamId, unsigned long long timestamp)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamWatch(streamId, timestamp);
	}
	/*
		End watching Chroma RGB data stream. StreamGetStatus() should return the
		WATCHING status to use this method.
	*/
	bool ChromaAnimationAPI::CoreStreamWatchEnd()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamWatchEnd();
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreUnInit()
	{
		if (!_sIsInitializedAPI)
		{
			return RZRESULT_SUCCESS;
		}
		if (!_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::CoreUnInit();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = false;
		}
		return result;
	}
	/*
		Creates a `Chroma` animation at the given path. The `deviceType` parameter
		uses `EChromaSDKDeviceTypeEnum` as an integer. The `device` parameter uses
		`EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` as an integer, respective
		to the `deviceType`. Returns the animation id upon success. Returns negative
		one upon failure. Saves a `Chroma` animation file with the `.chroma` extension
		at the given path. Returns the animation id upon success. Returns negative
		one upon failure.
	*/
	int ChromaAnimationAPI::CreateAnimation(const char* path, int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::CreateAnimation(wstr_Path.c_str(), deviceType, device);
	}
	/*
		Creates a `Chroma` animation in memory without creating a file. The `deviceType`
		parameter uses `EChromaSDKDeviceTypeEnum` as an integer. The `device` parameter
		uses `EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` as an integer,
		respective to the `deviceType`. Returns the animation id upon success.
		Returns negative one upon failure. Returns the animation id upon success.
		Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::CreateAnimationInMemory(int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CreateAnimationInMemory(deviceType, device);
	}
	/*
		Create a device specific effect.
	*/
	RZRESULT ChromaAnimationAPI::CreateEffect(RZDEVICEID deviceId, ChromaSDK::EFFECT_TYPE effect, int* colors, int size, ChromaSDK::FChromaSDKGuid* effectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CreateEffect(deviceId, effect, colors, size, effectId);
	}
	/*
		Delete an effect given the effect id.
	*/
	RZRESULT ChromaAnimationAPI::DeleteEffect(const ChromaSDK::FChromaSDKGuid& effectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::DeleteEffect(effectId);
	}
	/*
		Duplicate the first animation frame so that the animation length matches
		the frame count. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::DuplicateFirstFrame(int animationId, int frameCount)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::DuplicateFirstFrame(animationId, frameCount);
	}
	/*
		Duplicate the first animation frame so that the animation length matches
		the frame count. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::DuplicateFirstFrameName(const char* path, int frameCount)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::DuplicateFirstFrameName(wstr_Path.c_str(), frameCount);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::DuplicateFirstFrameNameD(const char* path, double frameCount)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::DuplicateFirstFrameNameD(wstr_Path.c_str(), frameCount);
	}
	/*
		Duplicate all the frames of the animation to double the animation length.
		Frame 1 becomes frame 1 and 2. Frame 2 becomes frame 3 and 4. And so on.
		The animation is referenced by id.
	*/
	void ChromaAnimationAPI::DuplicateFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::DuplicateFrames(animationId);
	}
	/*
		Duplicate all the frames of the animation to double the animation length.
		Frame 1 becomes frame 1 and 2. Frame 2 becomes frame 3 and 4. And so on.
		The animation is referenced by name.
	*/
	void ChromaAnimationAPI::DuplicateFramesName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::DuplicateFramesName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::DuplicateFramesNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::DuplicateFramesNameD(wstr_Path.c_str());
	}
	/*
		Duplicate all the animation frames in reverse so that the animation plays
		forwards and backwards. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::DuplicateMirrorFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::DuplicateMirrorFrames(animationId);
	}
	/*
		Duplicate all the animation frames in reverse so that the animation plays
		forwards and backwards. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::DuplicateMirrorFramesName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::DuplicateMirrorFramesName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::DuplicateMirrorFramesNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::DuplicateMirrorFramesNameD(wstr_Path.c_str());
	}
	/*
		Fade the animation to black starting at the fade frame index to the end
		of the animation. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FadeEndFrames(int animationId, int fade)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FadeEndFrames(animationId, fade);
	}
	/*
		Fade the animation to black starting at the fade frame index to the end
		of the animation. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FadeEndFramesName(const char* path, int fade)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FadeEndFramesName(wstr_Path.c_str(), fade);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FadeEndFramesNameD(const char* path, double fade)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FadeEndFramesNameD(wstr_Path.c_str(), fade);
	}
	/*
		Fade the animation from black to full color starting at 0 to the fade frame
		index. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FadeStartFrames(int animationId, int fade)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FadeStartFrames(animationId, fade);
	}
	/*
		Fade the animation from black to full color starting at 0 to the fade frame
		index. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FadeStartFramesName(const char* path, int fade)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FadeStartFramesName(wstr_Path.c_str(), fade);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FadeStartFramesNameD(const char* path, double fade)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FadeStartFramesNameD(wstr_Path.c_str(), fade);
	}
	/*
		Set the RGB value for all colors in the specified frame. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::FillColor(int animationId, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColor(animationId, frameId, color);
	}
	/*
		Set the RGB value for all colors for all frames. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::FillColorAllFrames(int animationId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColorAllFrames(animationId, color);
	}
	/*
		Set the RGB value for all colors for all frames. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::FillColorAllFramesName(const char* path, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillColorAllFramesName(wstr_Path.c_str(), color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillColorAllFramesNameD(const char* path, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillColorAllFramesNameD(wstr_Path.c_str(), color);
	}
	/*
		Set the RGB value for all colors for all frames. Use the range of 0 to 255
		for red, green, and blue parameters. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillColorAllFramesRGB(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColorAllFramesRGB(animationId, red, green, blue);
	}
	/*
		Set the RGB value for all colors for all frames. Use the range of 0 to 255
		for red, green, and blue parameters. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillColorAllFramesRGBName(const char* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillColorAllFramesRGBName(wstr_Path.c_str(), red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillColorAllFramesRGBNameD(const char* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillColorAllFramesRGBNameD(wstr_Path.c_str(), red, green, blue);
	}
	/*
		Set the RGB value for all colors in the specified frame. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::FillColorName(const char* path, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillColorName(wstr_Path.c_str(), frameId, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillColorNameD(const char* path, double frameId, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillColorNameD(wstr_Path.c_str(), frameId, color);
	}
	/*
		Set the RGB value for all colors in the specified frame. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::FillColorRGB(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColorRGB(animationId, frameId, red, green, blue);
	}
	/*
		Set the RGB value for all colors in the specified frame. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::FillColorRGBName(const char* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillColorRGBName(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillColorRGBNameD(const char* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillColorRGBNameD(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Set the RGB value for a subset of colors in the specified
		frame. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillNonZeroColor(int animationId, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColor(animationId, frameId, color);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Set the RGB value for a subset of colors for all frames.
		Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillNonZeroColorAllFrames(int animationId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColorAllFrames(animationId, color);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Set the RGB value for a subset of colors for all frames.
		Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillNonZeroColorAllFramesName(const char* path, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillNonZeroColorAllFramesName(wstr_Path.c_str(), color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillNonZeroColorAllFramesNameD(const char* path, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillNonZeroColorAllFramesNameD(wstr_Path.c_str(), color);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Set the RGB value for a subset of colors for all frames.
		Use the range of 0 to 255 for red, green, and blue parameters. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::FillNonZeroColorAllFramesRGB(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColorAllFramesRGB(animationId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Set the RGB value for a subset of colors for all frames.
		Use the range of 0 to 255 for red, green, and blue parameters. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::FillNonZeroColorAllFramesRGBName(const char* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillNonZeroColorAllFramesRGBName(wstr_Path.c_str(), red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillNonZeroColorAllFramesRGBNameD(const char* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillNonZeroColorAllFramesRGBNameD(wstr_Path.c_str(), red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Set the RGB value for a subset of colors in the specified
		frame. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillNonZeroColorName(const char* path, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillNonZeroColorName(wstr_Path.c_str(), frameId, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillNonZeroColorNameD(const char* path, double frameId, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillNonZeroColorNameD(wstr_Path.c_str(), frameId, color);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Set the RGB value for a subset of colors in the specified
		frame. Use the range of 0 to 255 for red, green, and blue parameters. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::FillNonZeroColorRGB(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColorRGB(animationId, frameId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Set the RGB value for a subset of colors in the specified
		frame. Use the range of 0 to 255 for red, green, and blue parameters. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::FillNonZeroColorRGBName(const char* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillNonZeroColorRGBName(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillNonZeroColorRGBNameD(const char* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillNonZeroColorRGBNameD(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		Fill the frame with random RGB values for the given frame. Animation is
		referenced by id.
	*/
	void ChromaAnimationAPI::FillRandomColors(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColors(animationId, frameId);
	}
	/*
		Fill the frame with random RGB values for all frames. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::FillRandomColorsAllFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColorsAllFrames(animationId);
	}
	/*
		Fill the frame with random RGB values for all frames. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::FillRandomColorsAllFramesName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillRandomColorsAllFramesName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillRandomColorsAllFramesNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillRandomColorsAllFramesNameD(wstr_Path.c_str());
	}
	/*
		Fill the frame with random black and white values for the specified frame.
		Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillRandomColorsBlackAndWhite(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhite(animationId, frameId);
	}
	/*
		Fill the frame with random black and white values for all frames. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFrames(animationId);
	}
	/*
		Fill the frame with random black and white values for all frames. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFramesName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFramesName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFramesNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFramesNameD(wstr_Path.c_str());
	}
	/*
		Fill the frame with random black and white values for the specified frame.
		Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillRandomColorsBlackAndWhiteName(const char* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhiteName(wstr_Path.c_str(), frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillRandomColorsBlackAndWhiteNameD(const char* path, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhiteNameD(wstr_Path.c_str(), frameId);
	}
	/*
		Fill the frame with random RGB values for the given frame. Animation is
		referenced by name.
	*/
	void ChromaAnimationAPI::FillRandomColorsName(const char* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillRandomColorsName(wstr_Path.c_str(), frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillRandomColorsNameD(const char* path, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillRandomColorsNameD(wstr_Path.c_str(), frameId);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less
		than the RGB threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColors(int animationId, int frameId, int threshold, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColors(animationId, frameId, threshold, color);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the
		RGB threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColorsAllFrames(int animationId, int threshold, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsAllFrames(animationId, threshold, color);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the
		RGB threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsAllFramesName(const char* path, int threshold, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillThresholdColorsAllFramesName(wstr_Path.c_str(), threshold, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsAllFramesNameD(const char* path, double threshold, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillThresholdColorsAllFramesNameD(wstr_Path.c_str(), threshold, color);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the
		threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColorsAllFramesRGB(int animationId, int threshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsAllFramesRGB(animationId, threshold, red, green, blue);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the
		threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsAllFramesRGBName(const char* path, int threshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillThresholdColorsAllFramesRGBName(wstr_Path.c_str(), threshold, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsAllFramesRGBNameD(const char* path, double threshold, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillThresholdColorsAllFramesRGBNameD(wstr_Path.c_str(), threshold, red, green, blue);
	}
	/*
		Fill all frames with the min RGB color where the animation color is less
		than the min threshold AND with the max RGB color where the animation is
		more than the max threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGB(int animationId, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGB(animationId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Fill all frames with the min RGB color where the animation color is less
		than the min threshold AND with the max RGB color where the animation is
		more than the max threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGBName(const char* path, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGBName(wstr_Path.c_str(), minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGBNameD(const char* path, double minThreshold, double minRed, double minGreen, double minBlue, double maxThreshold, double maxRed, double maxGreen, double maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGBNameD(wstr_Path.c_str(), minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Fill the specified frame with the min RGB color where the animation color
		is less than the min threshold AND with the max RGB color where the animation
		is more than the max threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColorsMinMaxRGB(int animationId, int frameId, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxRGB(animationId, frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Fill the specified frame with the min RGB color where the animation color
		is less than the min threshold AND with the max RGB color where the animation
		is more than the max threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsMinMaxRGBName(const char* path, int frameId, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxRGBName(wstr_Path.c_str(), frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsMinMaxRGBNameD(const char* path, double frameId, double minThreshold, double minRed, double minGreen, double minBlue, double maxThreshold, double maxRed, double maxGreen, double maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxRGBNameD(wstr_Path.c_str(), frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less
		than the RGB threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsName(const char* path, int frameId, int threshold, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillThresholdColorsName(wstr_Path.c_str(), frameId, threshold, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsNameD(const char* path, double frameId, double threshold, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillThresholdColorsNameD(wstr_Path.c_str(), frameId, threshold, color);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less
		than the RGB threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColorsRGB(int animationId, int frameId, int threshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsRGB(animationId, frameId, threshold, red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less
		than the RGB threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsRGBName(const char* path, int frameId, int threshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillThresholdColorsRGBName(wstr_Path.c_str(), frameId, threshold, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsRGBNameD(const char* path, double frameId, double threshold, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillThresholdColorsRGBNameD(wstr_Path.c_str(), frameId, threshold, red, green, blue);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the
		RGB threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGB(int animationId, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGB(animationId, redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the
		RGB threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGBName(const char* path, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGBName(wstr_Path.c_str(), redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGBNameD(const char* path, double redThreshold, double greenThreshold, double blueThreshold, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGBNameD(wstr_Path.c_str(), redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less
		than the RGB threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdRGBColorsRGB(int animationId, int frameId, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdRGBColorsRGB(animationId, frameId, redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less
		than the RGB threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdRGBColorsRGBName(const char* path, int frameId, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillThresholdRGBColorsRGBName(wstr_Path.c_str(), frameId, redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdRGBColorsRGBNameD(const char* path, double frameId, double redThreshold, double greenThreshold, double blueThreshold, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillThresholdRGBColorsRGBNameD(wstr_Path.c_str(), frameId, redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is zero.
		Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillZeroColor(int animationId, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColor(animationId, frameId, color);
	}
	/*
		Fill all frames with RGB color where the animation color is zero. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::FillZeroColorAllFrames(int animationId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColorAllFrames(animationId, color);
	}
	/*
		Fill all frames with RGB color where the animation color is zero. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::FillZeroColorAllFramesName(const char* path, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillZeroColorAllFramesName(wstr_Path.c_str(), color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillZeroColorAllFramesNameD(const char* path, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillZeroColorAllFramesNameD(wstr_Path.c_str(), color);
	}
	/*
		Fill all frames with RGB color where the animation color is zero. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::FillZeroColorAllFramesRGB(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColorAllFramesRGB(animationId, red, green, blue);
	}
	/*
		Fill all frames with RGB color where the animation color is zero. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::FillZeroColorAllFramesRGBName(const char* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillZeroColorAllFramesRGBName(wstr_Path.c_str(), red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillZeroColorAllFramesRGBNameD(const char* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillZeroColorAllFramesRGBNameD(wstr_Path.c_str(), red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is zero.
		Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillZeroColorName(const char* path, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillZeroColorName(wstr_Path.c_str(), frameId, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillZeroColorNameD(const char* path, double frameId, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillZeroColorNameD(wstr_Path.c_str(), frameId, color);
	}
	/*
		Fill the specified frame with RGB color where the animation color is zero.
		Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillZeroColorRGB(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColorRGB(animationId, frameId, red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is zero.
		Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillZeroColorRGBName(const char* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::FillZeroColorRGBName(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillZeroColorRGBNameD(const char* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::FillZeroColorRGBNameD(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		Get the animation color for a frame given the `1D` `led`. The `led` should
		be greater than or equal to 0 and less than the `MaxLeds`. Animation is
		referenced by id.
	*/
	int ChromaAnimationAPI::Get1DColor(int animationId, int frameId, int led)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::Get1DColor(animationId, frameId, led);
	}
	/*
		Get the animation color for a frame given the `1D` `led`. The `led` should
		be greater than or equal to 0 and less than the `MaxLeds`. Animation is
		referenced by name.
	*/
	int ChromaAnimationAPI::Get1DColorName(const char* path, int frameId, int led)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::Get1DColorName(wstr_Path.c_str(), frameId, led);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::Get1DColorNameD(const char* path, double frameId, double led)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::Get1DColorNameD(wstr_Path.c_str(), frameId, led);
	}
	/*
		Get the animation color for a frame given the `2D` `row` and `column`. The
		`row` should be greater than or equal to 0 and less than the `MaxRow`.
		The `column` should be greater than or equal to 0 and less than the `MaxColumn`.
		Animation is referenced by id.
	*/
	int ChromaAnimationAPI::Get2DColor(int animationId, int frameId, int row, int column)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::Get2DColor(animationId, frameId, row, column);
	}
	/*
		Get the animation color for a frame given the `2D` `row` and `column`. The
		`row` should be greater than or equal to 0 and less than the `MaxRow`.
		The `column` should be greater than or equal to 0 and less than the `MaxColumn`.
		Animation is referenced by name.
	*/
	int ChromaAnimationAPI::Get2DColorName(const char* path, int frameId, int row, int column)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::Get2DColorName(wstr_Path.c_str(), frameId, row, column);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::Get2DColorNameD(const char* path, double frameId, double row, double column)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::Get2DColorNameD(wstr_Path.c_str(), frameId, row, column);
	}
	/*
		Get the animation id for the named animation.
	*/
	int ChromaAnimationAPI::GetAnimation(const char* name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Name = name;
		wstring wstr_Name(str_Name.begin(), str_Name.end());
		return UnicodeChromaAnimationAPI::GetAnimation(wstr_Name.c_str());
	}
	/*
		`PluginGetAnimationCount` will return the number of loaded animations.
	*/
	int ChromaAnimationAPI::GetAnimationCount()
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetAnimationCount();
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetAnimationD(const char* name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Name = name;
		wstring wstr_Name(str_Name.begin(), str_Name.end());
		return UnicodeChromaAnimationAPI::GetAnimationD(wstr_Name.c_str());
	}
	/*
		`PluginGetAnimationId` will return the `animationId` given the `index` of
		the loaded animation. The `index` is zero-based and less than the number
		returned by `PluginGetAnimationCount`. Use `PluginGetAnimationName` to
		get the name of the animation.
	*/
	int ChromaAnimationAPI::GetAnimationId(int index)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetAnimationId(index);
	}
	/*
		`PluginGetAnimationName` takes an `animationId` and returns the name of
		the animation of the `.chroma` animation file. If a name is not available
		then an empty string will be returned.
	*/
	const char* ChromaAnimationAPI::GetAnimationName(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return "";
		}
		if (!_sInitialized)
		{
			return "";
		}
		wstring wstr_Result = UnicodeChromaAnimationAPI::GetAnimationName(animationId);
		string str_Result(wstr_Result.begin(), wstr_Result.end());
		_sResultGetAnimationName = str_Result;
		return _sResultGetAnimationName.c_str();
	}
	/*
		Get the current frame of the animation referenced by id.
	*/
	int ChromaAnimationAPI::GetCurrentFrame(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetCurrentFrame(animationId);
	}
	/*
		Get the current frame of the animation referenced by name.
	*/
	int ChromaAnimationAPI::GetCurrentFrameName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetCurrentFrameName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetCurrentFrameNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetCurrentFrameNameD(wstr_Path.c_str());
	}
	/*
		Returns the `EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` of a `Chroma`
		animation respective to the `deviceType`, as an integer upon success. Returns
		negative one upon failure.
	*/
	int ChromaAnimationAPI::GetDevice(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetDevice(animationId);
	}
	/*
		Returns the `EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` of a `Chroma`
		animation respective to the `deviceType`, as an integer upon success. Returns
		negative one upon failure.
	*/
	int ChromaAnimationAPI::GetDeviceName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetDeviceName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetDeviceNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetDeviceNameD(wstr_Path.c_str());
	}
	/*
		Returns the `EChromaSDKDeviceTypeEnum` of a `Chroma` animation as an integer
		upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetDeviceType(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetDeviceType(animationId);
	}
	/*
		Returns the `EChromaSDKDeviceTypeEnum` of a `Chroma` animation as an integer
		upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetDeviceTypeName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetDeviceTypeName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetDeviceTypeNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetDeviceTypeNameD(wstr_Path.c_str());
	}
	/*
		Get the frame colors and duration (in seconds) for a `Chroma` animation
		referenced by id. The `color` is expected to be an array of the expected
		dimensions for the `deviceType/device`. The `length` parameter is the size
		of the `color` array. For `EChromaSDKDevice1DEnum` the array size should
		be `MAX LEDS`. For `EChromaSDKDevice2DEnum` the array size should be `MAX
		ROW` times `MAX COLUMN`. Keys are populated only for EChromaSDKDevice2DEnum::DE_Keyboard
		and EChromaSDKDevice2DEnum::DE_KeyboardExtended. Keys will only use the
		EChromaSDKDevice2DEnum::DE_Keyboard `MAX_ROW` times `MAX_COLUMN` keysLength.
		Returns the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetFrame(int animationId, int frameId, float* duration, int* colors, int length, int* keys, int keysLength)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetFrame(animationId, frameId, duration, colors, length, keys, keysLength);
	}
	/*
		Returns the frame count of a `Chroma` animation upon success. Returns negative
		one upon failure.
	*/
	int ChromaAnimationAPI::GetFrameCount(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetFrameCount(animationId);
	}
	/*
		Returns the frame count of a `Chroma` animation upon success. Returns negative
		one upon failure.
	*/
	int ChromaAnimationAPI::GetFrameCountName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetFrameCountName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetFrameCountNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetFrameCountNameD(wstr_Path.c_str());
	}
	/*
		Returns the duration of an animation frame in seconds upon success. Returns
		zero upon failure.
	*/
	float ChromaAnimationAPI::GetFrameDuration(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetFrameDuration(animationId, frameId);
	}
	/*
		Returns the duration of an animation frame in seconds upon success. Returns
		zero upon failure.
	*/
	float ChromaAnimationAPI::GetFrameDurationName(const char* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetFrameDurationName(wstr_Path.c_str(), frameId);
	}
	/*
		Get the frame colors and duration (in seconds) for a `Chroma` animation
		referenced by name. The `color` is expected to be an array of the expected
		dimensions for the `deviceType/device`. The `length` parameter is the size
		of the `color` array. For `EChromaSDKDevice1DEnum` the array size should
		be `MAX LEDS`. For `EChromaSDKDevice2DEnum` the array size should be `MAX
		ROW` times `MAX COLUMN`. Keys are populated only for EChromaSDKDevice2DEnum::DE_Keyboard
		and EChromaSDKDevice2DEnum::DE_KeyboardExtended. Keys will only use the
		EChromaSDKDevice2DEnum::DE_Keyboard `MAX_ROW` times `MAX_COLUMN` keysLength.
		Returns the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetFrameName(const char* path, int frameId, float* duration, int* colors, int length, int* keys, int keysLength)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetFrameName(wstr_Path.c_str(), frameId, duration, colors, length, keys, keysLength);
	}
	/*
		Get the color of an animation key for the given frame referenced by id.
	*/
	int ChromaAnimationAPI::GetKeyColor(int animationId, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetKeyColor(animationId, frameId, rzkey);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetKeyColorD(const char* path, double frameId, double rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetKeyColorD(wstr_Path.c_str(), frameId, rzkey);
	}
	/*
		Get the color of an animation key for the given frame referenced by name.
	*/
	int ChromaAnimationAPI::GetKeyColorName(const char* path, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetKeyColorName(wstr_Path.c_str(), frameId, rzkey);
	}
	/*
		Returns `RZRESULT_SUCCESS` if the plugin has been initialized successfully.
		Returns `RZRESULT_DLL_NOT_FOUND` if core Chroma library is not found. Returns
		`RZRESULT_DLL_INVALID_SIGNATURE` if core Chroma library has an invalid
		signature.
	*/
	RZRESULT ChromaAnimationAPI::GetLibraryLoadedState()
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetLibraryLoadedState();
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetLibraryLoadedStateD()
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetLibraryLoadedStateD();
	}
	/*
		Returns the `MAX COLUMN` given the `EChromaSDKDevice2DEnum` device as an
		integer upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetMaxColumn(int device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxColumn(device);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetMaxColumnD(double device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxColumnD(device);
	}
	/*
		Returns the MAX LEDS given the `EChromaSDKDevice1DEnum` device as an integer
		upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetMaxLeds(int device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxLeds(device);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetMaxLedsD(double device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxLedsD(device);
	}
	/*
		Returns the `MAX ROW` given the `EChromaSDKDevice2DEnum` device as an integer
		upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetMaxRow(int device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxRow(device);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetMaxRowD(double device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxRowD(device);
	}
	/*
		`PluginGetPlayingAnimationCount` will return the number of playing animations.
	*/
	int ChromaAnimationAPI::GetPlayingAnimationCount()
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetPlayingAnimationCount();
	}
	/*
		`PluginGetPlayingAnimationId` will return the `animationId` given the `index`
		of the playing animation. The `index` is zero-based and less than the number
		returned by `PluginGetPlayingAnimationCount`. Use `PluginGetAnimationName`
		to get the name of the animation.
	*/
	int ChromaAnimationAPI::GetPlayingAnimationId(int index)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetPlayingAnimationId(index);
	}
	/*
		Get the RGB color given red, green, and blue.
	*/
	int ChromaAnimationAPI::GetRGB(int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetRGB(red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetRGBD(double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetRGBD(red, green, blue);
	}
	/*
		Returns the total duration of an animation in seconds upon success. Returns
		zero upon failure.
	*/
	float ChromaAnimationAPI::GetTotalDuration(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetTotalDuration(animationId);
	}
	/*
		Returns the total duration of an animation in seconds upon success. Returns
		zero upon failure.
	*/
	float ChromaAnimationAPI::GetTotalDurationName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::GetTotalDurationName(wstr_Path.c_str());
	}
	/*
		Check if the animation has loop enabled referenced by id.
	*/
	bool ChromaAnimationAPI::HasAnimationLoop(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::HasAnimationLoop(animationId);
	}
	/*
		Check if the animation has loop enabled referenced by name.
	*/
	bool ChromaAnimationAPI::HasAnimationLoopName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::HasAnimationLoopName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::HasAnimationLoopNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::HasAnimationLoopNameD(wstr_Path.c_str());
	}
	/*
		Initialize the ChromaSDK. Zero indicates success, otherwise failure. Many
		API methods auto initialize the ChromaSDK if not already initialized.
	*/
	RZRESULT ChromaAnimationAPI::Init()
	{
		if (!_sIsInitializedAPI)
		{
			RZRESULT result = UnicodeChromaAnimationAPI::Init();
			if (result != RZRESULT_SUCCESS)
			{
				return result;
			}
			if (!_sIsInitializedAPI)
			{
				return static_cast<RZRESULT>(RZRESULT_FAILED);
			}
		}
		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::Init();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = true;
		}
		return result;
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::InitD()
	{
		if (!_sIsInitializedAPI)
		{
			RZRESULT result = InitAPI();
			if (result != RZRESULT_SUCCESS)
			{
				return result;
			}
			if (!_sIsInitializedAPI)
			{
				return static_cast<RZRESULT>(RZRESULT_FAILED);
			}
		}
		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::InitD();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = true;
		}
		return result;
	}
	/*
		Initialize the ChromaSDK. AppInfo populates the details in Synapse. Zero
		indicates success, otherwise failure. Many API methods auto initialize
		the ChromaSDK if not already initialized.
	*/
	RZRESULT ChromaAnimationAPI::InitSDK(ChromaSDK::APPINFOTYPE* appInfo)
	{
		if (!_sIsInitializedAPI)
		{
			RZRESULT result = InitAPI();
			if (result != RZRESULT_SUCCESS)
			{
				return result;
			}
			if (!_sIsInitializedAPI)
			{
				return static_cast<RZRESULT>(RZRESULT_FAILED);
			}
		}
		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::InitSDK(appInfo);
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = true;
		}
		return result;
	}
	/*
		Insert an animation delay by duplicating the frame by the delay number of
		times. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::InsertDelay(int animationId, int frameId, int delay)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InsertDelay(animationId, frameId, delay);
	}
	/*
		Insert an animation delay by duplicating the frame by the delay number of
		times. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::InsertDelayName(const char* path, int frameId, int delay)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::InsertDelayName(wstr_Path.c_str(), frameId, delay);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::InsertDelayNameD(const char* path, double frameId, double delay)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::InsertDelayNameD(wstr_Path.c_str(), frameId, delay);
	}
	/*
		Duplicate the source frame index at the target frame index. Animation is
		referenced by id.
	*/
	void ChromaAnimationAPI::InsertFrame(int animationId, int sourceFrame, int targetFrame)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InsertFrame(animationId, sourceFrame, targetFrame);
	}
	/*
		Duplicate the source frame index at the target frame index. Animation is
		referenced by name.
	*/
	void ChromaAnimationAPI::InsertFrameName(const char* path, int sourceFrame, int targetFrame)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::InsertFrameName(wstr_Path.c_str(), sourceFrame, targetFrame);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::InsertFrameNameD(const char* path, double sourceFrame, double targetFrame)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::InsertFrameNameD(wstr_Path.c_str(), sourceFrame, targetFrame);
	}
	/*
		Invert all the colors at the specified frame. Animation is referenced by
		id.
	*/
	void ChromaAnimationAPI::InvertColors(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InvertColors(animationId, frameId);
	}
	/*
		Invert all the colors for all frames. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::InvertColorsAllFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InvertColorsAllFrames(animationId);
	}
	/*
		Invert all the colors for all frames. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::InvertColorsAllFramesName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::InvertColorsAllFramesName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::InvertColorsAllFramesNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::InvertColorsAllFramesNameD(wstr_Path.c_str());
	}
	/*
		Invert all the colors at the specified frame. Animation is referenced by
		name.
	*/
	void ChromaAnimationAPI::InvertColorsName(const char* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::InvertColorsName(wstr_Path.c_str(), frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::InvertColorsNameD(const char* path, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::InvertColorsNameD(wstr_Path.c_str(), frameId);
	}
	/*
		Check if the animation is paused referenced by id.
	*/
	bool ChromaAnimationAPI::IsAnimationPaused(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsAnimationPaused(animationId);
	}
	/*
		Check if the animation is paused referenced by name.
	*/
	bool ChromaAnimationAPI::IsAnimationPausedName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::IsAnimationPausedName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsAnimationPausedNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}

		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::IsAnimationPausedNameD(wstr_Path.c_str());
	}
	/*
		The editor dialog is a non-blocking modal window, this method returns true
		if the modal window is open, otherwise false.
	*/
	bool ChromaAnimationAPI::IsDialogOpen()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsDialogOpen();
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsDialogOpenD()
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::IsDialogOpenD();
	}
	/*
		Returns true if the plugin has been initialized. Returns false if the plugin
		is uninitialized.
	*/
	bool ChromaAnimationAPI::IsInitialized()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsInitialized();
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsInitializedD()
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::IsInitializedD();
	}
	/*
		If the method can be invoked the method returns true.
	*/
	bool ChromaAnimationAPI::IsPlatformSupported()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsPlatformSupported();
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsPlatformSupportedD()
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::IsPlatformSupportedD();
	}
	/*
		`PluginIsPlayingName` automatically handles initializing the `ChromaSDK`.
		The named `.chroma` animation file will be automatically opened. The method
		will return whether the animation is playing or not. Animation is referenced
		by id.
	*/
	bool ChromaAnimationAPI::IsPlaying(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsPlaying(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsPlayingD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::IsPlayingD(animationId);
	}
	/*
		`PluginIsPlayingName` automatically handles initializing the `ChromaSDK`.
		The named `.chroma` animation file will be automatically opened. The method
		will return whether the animation is playing or not. Animation is referenced
		by name.
	*/
	bool ChromaAnimationAPI::IsPlayingName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::IsPlayingName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsPlayingNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::IsPlayingNameD(wstr_Path.c_str());
	}
	/*
		`PluginIsPlayingType` automatically handles initializing the `ChromaSDK`.
		If any animation is playing for the `deviceType` and `device` combination,
		the method will return true, otherwise false.
	*/
	bool ChromaAnimationAPI::IsPlayingType(int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsPlayingType(deviceType, device);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsPlayingTypeD(double deviceType, double device)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::IsPlayingTypeD(deviceType, device);
	}
	/*
		Do a lerp math operation on a float.
	*/
	float ChromaAnimationAPI::Lerp(float start, float end, float amt)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::Lerp(start, end, amt);
	}
	/*
		Lerp from one color to another given t in the range 0.0 to 1.0.
	*/
	int ChromaAnimationAPI::LerpColor(int from, int to, float t)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::LerpColor(from, to, t);
	}
	/*
		Loads `Chroma` effects so that the animation can be played immediately.
		Returns the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::LoadAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::LoadAnimation(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::LoadAnimationD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::LoadAnimationD(animationId);
	}
	/*
		Load the named animation.
	*/
	void ChromaAnimationAPI::LoadAnimationName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::LoadAnimationName(wstr_Path.c_str());
	}
	/*
		Load a composite set of animations.
	*/
	void ChromaAnimationAPI::LoadComposite(const char* name)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Name = name;
		wstring wstr_Name(str_Name.begin(), str_Name.end());
		UnicodeChromaAnimationAPI::LoadComposite(wstr_Name.c_str());
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration
		defaults to the duration. The frame color defaults to color. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::MakeBlankFrames(int animationId, int frameCount, float duration, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFrames(animationId, frameCount, duration, color);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration
		defaults to the duration. The frame color defaults to color. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::MakeBlankFramesName(const char* path, int frameCount, float duration, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MakeBlankFramesName(wstr_Path.c_str(), frameCount, duration, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MakeBlankFramesNameD(const char* path, double frameCount, double duration, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MakeBlankFramesNameD(wstr_Path.c_str(), frameCount, duration, color);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration
		defaults to the duration. The frame color is random. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRandom(int animationId, int frameCount, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFramesRandom(animationId, frameCount, duration);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration
		defaults to the duration. The frame color is random black and white. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhite(int animationId, int frameCount, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhite(animationId, frameCount, duration);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration
		defaults to the duration. The frame color is random black and white. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhiteName(const char* path, int frameCount, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhiteName(wstr_Path.c_str(), frameCount, duration);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhiteNameD(const char* path, double frameCount, double duration)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhiteNameD(wstr_Path.c_str(), frameCount, duration);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration
		defaults to the duration. The frame color is random. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRandomName(const char* path, int frameCount, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MakeBlankFramesRandomName(wstr_Path.c_str(), frameCount, duration);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MakeBlankFramesRandomNameD(const char* path, double frameCount, double duration)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MakeBlankFramesRandomNameD(wstr_Path.c_str(), frameCount, duration);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration
		defaults to the duration. The frame color defaults to color. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRGB(int animationId, int frameCount, float duration, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFramesRGB(animationId, frameCount, duration, red, green, blue);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration
		defaults to the duration. The frame color defaults to color. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRGBName(const char* path, int frameCount, float duration, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MakeBlankFramesRGBName(wstr_Path.c_str(), frameCount, duration, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MakeBlankFramesRGBNameD(const char* path, double frameCount, double duration, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MakeBlankFramesRGBNameD(wstr_Path.c_str(), frameCount, duration, red, green, blue);
	}
	/*
		Flips the color grid horizontally for all `Chroma` animation frames. Returns
		the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::MirrorHorizontally(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MirrorHorizontally(animationId);
	}
	/*
		Flips the color grid vertically for all `Chroma` animation frames. This
		method has no effect for `EChromaSDKDevice1DEnum` devices. Returns the
		animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::MirrorVertically(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MirrorVertically(animationId);
	}
	/*
		Multiply the color intensity with the lerp result from color 1 to color
		2 using the frame index divided by the frame count for the `t` parameter.
		Animation is referenced in id.
	*/
	void ChromaAnimationAPI::MultiplyColorLerpAllFrames(int animationId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyColorLerpAllFrames(animationId, color1, color2);
	}
	/*
		Multiply the color intensity with the lerp result from color 1 to color
		2 using the frame index divided by the frame count for the `t` parameter.
		Animation is referenced in name.
	*/
	void ChromaAnimationAPI::MultiplyColorLerpAllFramesName(const char* path, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyColorLerpAllFramesName(wstr_Path.c_str(), color1, color2);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyColorLerpAllFramesNameD(const char* path, double color1, double color2)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MultiplyColorLerpAllFramesNameD(wstr_Path.c_str(), color1, color2);
	}
	/*
		Multiply all the colors in the frame by the intensity value. The valid the
		intensity range is from 0.0 to 255.0. RGB components are multiplied equally.
		An intensity of 0.5 would half the color value. Black colors in the frame
		will not be affected by this method.
	*/
	void ChromaAnimationAPI::MultiplyIntensity(int animationId, int frameId, float intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensity(animationId, frameId, intensity);
	}
	/*
		Multiply all the colors for all frames by the intensity value. The valid
		the intensity range is from 0.0 to 255.0. RGB components are multiplied
		equally. An intensity of 0.5 would half the color value. Black colors in
		the frame will not be affected by this method.
	*/
	void ChromaAnimationAPI::MultiplyIntensityAllFrames(int animationId, float intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityAllFrames(animationId, intensity);
	}
	/*
		Multiply all the colors for all frames by the intensity value. The valid
		the intensity range is from 0.0 to 255.0. RGB components are multiplied
		equally. An intensity of 0.5 would half the color value. Black colors in
		the frame will not be affected by this method.
	*/
	void ChromaAnimationAPI::MultiplyIntensityAllFramesName(const char* path, float intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyIntensityAllFramesName(wstr_Path.c_str(), intensity);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityAllFramesNameD(const char* path, double intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MultiplyIntensityAllFramesNameD(wstr_Path.c_str(), intensity);
	}
	/*
		Multiply all frames by the RBG color intensity. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::MultiplyIntensityAllFramesRGB(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityAllFramesRGB(animationId, red, green, blue);
	}
	/*
		Multiply all frames by the RBG color intensity. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::MultiplyIntensityAllFramesRGBName(const char* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyIntensityAllFramesRGBName(wstr_Path.c_str(), red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityAllFramesRGBNameD(const char* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MultiplyIntensityAllFramesRGBNameD(wstr_Path.c_str(), red, green, blue);
	}
	/*
		Multiply the specific frame by the RBG color intensity. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::MultiplyIntensityColor(int animationId, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityColor(animationId, frameId, color);
	}
	/*
		Multiply all frames by the RBG color intensity. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::MultiplyIntensityColorAllFrames(int animationId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityColorAllFrames(animationId, color);
	}
	/*
		Multiply all frames by the RBG color intensity. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::MultiplyIntensityColorAllFramesName(const char* path, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyIntensityColorAllFramesName(wstr_Path.c_str(), color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityColorAllFramesNameD(const char* path, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MultiplyIntensityColorAllFramesNameD(wstr_Path.c_str(), color);
	}
	/*
		Multiply the specific frame by the RBG color intensity. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::MultiplyIntensityColorName(const char* path, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyIntensityColorName(wstr_Path.c_str(), frameId, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityColorNameD(const char* path, double frameId, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MultiplyIntensityColorNameD(wstr_Path.c_str(), frameId, color);
	}
	/*
		Multiply all the colors in the frame by the intensity value. The valid the
		intensity range is from 0.0 to 255.0. RGB components are multiplied equally.
		An intensity of 0.5 would half the color value. Black colors in the frame
		will not be affected by this method.
	*/
	void ChromaAnimationAPI::MultiplyIntensityName(const char* path, int frameId, float intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyIntensityName(wstr_Path.c_str(), frameId, intensity);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityNameD(const char* path, double frameId, double intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MultiplyIntensityNameD(wstr_Path.c_str(), frameId, intensity);
	}
	/*
		Multiply the specific frame by the RBG color intensity. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::MultiplyIntensityRGB(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityRGB(animationId, frameId, red, green, blue);
	}
	/*
		Multiply the specific frame by the RBG color intensity. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::MultiplyIntensityRGBName(const char* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyIntensityRGBName(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityRGBNameD(const char* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MultiplyIntensityRGBNameD(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		Multiply the specific frame by the color lerp result between color 1 and
		2 using the frame color value as the `t` value. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::MultiplyNonZeroTargetColorLerp(int animationId, int frameId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerp(animationId, frameId, color1, color2);
	}
	/*
		Multiply all frames by the color lerp result between color 1 and 2 using
		the frame color value as the `t` value. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFrames(int animationId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFrames(animationId, color1, color2);
	}
	/*
		Multiply all frames by the color lerp result between color 1 and 2 using
		the frame color value as the `t` value. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesName(const char* path, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesName(wstr_Path.c_str(), color1, color2);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesNameD(const char* path, double color1, double color2)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesNameD(wstr_Path.c_str(), color1, color2);
	}
	/*
		Multiply the specific frame by the color lerp result between RGB 1 and 2
		using the frame color value as the `t` value. Animation is referenced by
		id.
	*/
	void ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGB(int animationId, int red1, int green1, int blue1, int red2, int green2, int blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGB(animationId, red1, green1, blue1, red2, green2, blue2);
	}
	/*
		Multiply the specific frame by the color lerp result between RGB 1 and 2
		using the frame color value as the `t` value. Animation is referenced by
		name.
	*/
	void ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGBName(const char* path, int red1, int green1, int blue1, int red2, int green2, int blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGBName(wstr_Path.c_str(), red1, green1, blue1, red2, green2, blue2);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGBNameD(const char* path, double red1, double green1, double blue1, double red2, double green2, double blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGBNameD(wstr_Path.c_str(), red1, green1, blue1, red2, green2, blue2);
	}
	/*
		Multiply the specific frame by the color lerp result between color 1 and
		2 using the frame color value as the `t` value. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerp(int animationId, int frameId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerp(animationId, frameId, color1, color2);
	}
	/*
		Multiply all frames by the color lerp result between color 1 and 2 using
		the frame color value as the `t` value. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerpAllFrames(int animationId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFrames(animationId, color1, color2);
	}
	/*
		Multiply all frames by the color lerp result between color 1 and 2 using
		the frame color value as the `t` value. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerpAllFramesName(const char* path, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFramesName(wstr_Path.c_str(), color1, color2);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyTargetColorLerpAllFramesNameD(const char* path, double color1, double color2)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFramesNameD(wstr_Path.c_str(), color1, color2);
	}
	/*
		Multiply all frames by the color lerp result between RGB 1 and 2 using the
		frame color value as the `t` value. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGB(int animationId, int red1, int green1, int blue1, int red2, int green2, int blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGB(animationId, red1, green1, blue1, red2, green2, blue2);
	}
	/*
		Multiply all frames by the color lerp result between RGB 1 and 2 using the
		frame color value as the `t` value. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGBName(const char* path, int red1, int green1, int blue1, int red2, int green2, int blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGBName(wstr_Path.c_str(), red1, green1, blue1, red2, green2, blue2);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGBNameD(const char* path, double red1, double green1, double blue1, double red2, double green2, double blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGBNameD(wstr_Path.c_str(), red1, green1, blue1, red2, green2, blue2);
	}
	/*
		Multiply the specific frame by the color lerp result between color 1 and
		2 using the frame color value as the `t` value. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerpName(const char* path, int frameId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerpName(wstr_Path.c_str(), frameId, color1, color2);
	}
	/*
		Offset all colors in the frame using the RGB offset. Use the range of -255
		to 255 for red, green, and blue parameters. Negative values remove color.
		Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetColors(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetColors(animationId, frameId, red, green, blue);
	}
	/*
		Offset all colors for all frames using the RGB offset. Use the range of
		-255 to 255 for red, green, and blue parameters. Negative values remove
		color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetColorsAllFrames(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetColorsAllFrames(animationId, red, green, blue);
	}
	/*
		Offset all colors for all frames using the RGB offset. Use the range of
		-255 to 255 for red, green, and blue parameters. Negative values remove
		color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetColorsAllFramesName(const char* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::OffsetColorsAllFramesName(wstr_Path.c_str(), red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OffsetColorsAllFramesNameD(const char* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::OffsetColorsAllFramesNameD(wstr_Path.c_str(), red, green, blue);
	}
	/*
		Offset all colors in the frame using the RGB offset. Use the range of -255
		to 255 for red, green, and blue parameters. Negative values remove color.
		Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetColorsName(const char* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::OffsetColorsName(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OffsetColorsNameD(const char* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::OffsetColorsNameD(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Offset a subset of colors in the frame using the RGB offset.
		Use the range of -255 to 255 for red, green, and blue parameters. Negative
		values remove color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetNonZeroColors(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetNonZeroColors(animationId, frameId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Offset a subset of colors for all frames using the RGB offset.
		Use the range of -255 to 255 for red, green, and blue parameters. Negative
		values remove color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetNonZeroColorsAllFrames(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetNonZeroColorsAllFrames(animationId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Offset a subset of colors for all frames using the RGB offset.
		Use the range of -255 to 255 for red, green, and blue parameters. Negative
		values remove color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetNonZeroColorsAllFramesName(const char* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::OffsetNonZeroColorsAllFramesName(wstr_Path.c_str(), red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OffsetNonZeroColorsAllFramesNameD(const char* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::OffsetNonZeroColorsAllFramesNameD(wstr_Path.c_str(), red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already
		set to black. Offset a subset of colors in the frame using the RGB offset.
		Use the range of -255 to 255 for red, green, and blue parameters. Negative
		values remove color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetNonZeroColorsName(const char* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::OffsetNonZeroColorsName(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OffsetNonZeroColorsNameD(const char* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::OffsetNonZeroColorsNameD(wstr_Path.c_str(), frameId, red, green, blue);
	}
	/*
		Opens a `Chroma` animation file so that it can be played. Returns an animation
		id >= 0 upon success. Returns negative one if there was a failure. The
		animation id is used in most of the API methods.
	*/
	int ChromaAnimationAPI::OpenAnimation(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::OpenAnimation(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OpenAnimationD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::OpenAnimationD(wstr_Path.c_str());
	}
	/*
		Opens a `Chroma` animation data from memory so that it can be played. `Data`
		is a pointer to BYTE array of the loaded animation in memory. `Name` will
		be assigned to the animation when loaded. Returns an animation id >= 0
		upon success. Returns negative one if there was a failure. The animation
		id is used in most of the API methods.
	*/
	int ChromaAnimationAPI::OpenAnimationFromMemory(const BYTE* data, const char* name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Name = name;
		wstring wstr_Name(str_Name.begin(), str_Name.end());
		return UnicodeChromaAnimationAPI::OpenAnimationFromMemory(data, wstr_Name.c_str());
	}
	/*
		Opens a `Chroma` animation file with the `.chroma` extension. Returns zero
		upon success. Returns negative one if there was a failure.
	*/
	int ChromaAnimationAPI::OpenEditorDialog(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::OpenEditorDialog(wstr_Path.c_str());
	}
	/*
		Open the named animation in the editor dialog and play the animation at
		start.
	*/
	int ChromaAnimationAPI::OpenEditorDialogAndPlay(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::OpenEditorDialogAndPlay(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OpenEditorDialogAndPlayD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::OpenEditorDialogAndPlayD(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OpenEditorDialogD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::OpenEditorDialogD(wstr_Path.c_str());
	}
	/*
		Sets the `duration` for all grames in the `Chroma` animation to the `duration`
		parameter. Returns the animation id upon success. Returns negative one
		upon failure.
	*/
	int ChromaAnimationAPI::OverrideFrameDuration(int animationId, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OverrideFrameDuration(animationId, duration);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OverrideFrameDurationD(double animationId, double duration)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OverrideFrameDurationD(animationId, duration);
	}
	/*
		Override the duration of all frames with the `duration` value. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::OverrideFrameDurationName(const char* path, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::OverrideFrameDurationName(wstr_Path.c_str(), duration);
	}
	/*
		Pause the current animation referenced by id.
	*/
	void ChromaAnimationAPI::PauseAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::PauseAnimation(animationId);
	}
	/*
		Pause the current animation referenced by name.
	*/
	void ChromaAnimationAPI::PauseAnimationName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::PauseAnimationName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PauseAnimationNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::PauseAnimationNameD(wstr_Path.c_str());
	}
	/*
		Plays the `Chroma` animation. This will load the animation, if not loaded
		previously. Returns the animation id upon success. Returns negative one
		upon failure.
	*/
	int ChromaAnimationAPI::PlayAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PlayAnimation(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PlayAnimationD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PlayAnimationD(animationId);
	}
	/*
		`PluginPlayAnimationFrame` automatically handles initializing the `ChromaSDK`.
		The method will play the animation given the `animationId` with looping
		`on` or `off` starting at the `frameId`.
	*/
	void ChromaAnimationAPI::PlayAnimationFrame(int animationId, int frameId, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::PlayAnimationFrame(animationId, frameId, loop);
	}
	/*
		`PluginPlayAnimationFrameName` automatically handles initializing the `ChromaSDK`.
		The named `.chroma` animation file will be automatically opened. The animation
		will play with looping `on` or `off` starting at the `frameId`.
	*/
	void ChromaAnimationAPI::PlayAnimationFrameName(const char* path, int frameId, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::PlayAnimationFrameName(wstr_Path.c_str(), frameId, loop);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PlayAnimationFrameNameD(const char* path, double frameId, double loop)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::PlayAnimationFrameNameD(wstr_Path.c_str(), frameId, loop);
	}
	/*
		`PluginPlayAnimationLoop` automatically handles initializing the `ChromaSDK`.
		The method will play the animation given the `animationId` with looping
		`on` or `off`.
	*/
	void ChromaAnimationAPI::PlayAnimationLoop(int animationId, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::PlayAnimationLoop(animationId, loop);
	}
	/*
		`PluginPlayAnimationName` automatically handles initializing the `ChromaSDK`.
		The named `.chroma` animation file will be automatically opened. The animation
		will play with looping `on` or `off`.
	*/
	void ChromaAnimationAPI::PlayAnimationName(const char* path, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::PlayAnimationName(wstr_Path.c_str(), loop);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PlayAnimationNameD(const char* path, double loop)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::PlayAnimationNameD(wstr_Path.c_str(), loop);
	}
	/*
		`PluginPlayComposite` automatically handles initializing the `ChromaSDK`.
		The named animation files for the `.chroma` set will be automatically opened.
		The set of animations will play with looping `on` or `off`.
	*/
	void ChromaAnimationAPI::PlayComposite(const char* name, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Name = name;
		wstring wstr_Name(str_Name.begin(), str_Name.end());
		UnicodeChromaAnimationAPI::PlayComposite(wstr_Name.c_str(), loop);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PlayCompositeD(const char* name, double loop)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Name = name;
		wstring wstr_Name(str_Name.begin(), str_Name.end());
		return UnicodeChromaAnimationAPI::PlayCompositeD(wstr_Name.c_str(), loop);
	}
	/*
		Displays the `Chroma` animation frame on `Chroma` hardware given the `frameId`.
		Returns the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::PreviewFrame(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PreviewFrame(animationId, frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PreviewFrameD(double animationId, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PreviewFrameD(animationId, frameId);
	}
	/*
		Displays the `Chroma` animation frame on `Chroma` hardware given the `frameId`.
		Animaton is referenced by name.
	*/
	void ChromaAnimationAPI::PreviewFrameName(const char* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::PreviewFrameName(wstr_Path.c_str(), frameId);
	}
	/*
		Reduce the frames of the animation by removing every nth element. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::ReduceFrames(int animationId, int n)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ReduceFrames(animationId, n);
	}
	/*
		Reduce the frames of the animation by removing every nth element. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::ReduceFramesName(const char* path, int n)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::ReduceFramesName(wstr_Path.c_str(), n);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::ReduceFramesNameD(const char* path, double n)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::ReduceFramesNameD(wstr_Path.c_str(), n);
	}
	/*
		Resets the `Chroma` animation to 1 blank frame. Returns the animation id
		upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::ResetAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::ResetAnimation(animationId);
	}
	/*
		Resume the animation with loop `ON` or `OFF` referenced by id.
	*/
	void ChromaAnimationAPI::ResumeAnimation(int animationId, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ResumeAnimation(animationId, loop);
	}
	/*
		Resume the animation with loop `ON` or `OFF` referenced by name.
	*/
	void ChromaAnimationAPI::ResumeAnimationName(const char* path, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::ResumeAnimationName(wstr_Path.c_str(), loop);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::ResumeAnimationNameD(const char* path, double loop)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::ResumeAnimationNameD(wstr_Path.c_str(), loop);
	}
	/*
		Reverse the animation frame order of the `Chroma` animation. Returns the
		animation id upon success. Returns negative one upon failure. Animation
		is referenced by id.
	*/
	int ChromaAnimationAPI::Reverse(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::Reverse(animationId);
	}
	/*
		Reverse the animation frame order of the `Chroma` animation. Animation is
		referenced by id.
	*/
	void ChromaAnimationAPI::ReverseAllFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ReverseAllFrames(animationId);
	}
	/*
		Reverse the animation frame order of the `Chroma` animation. Animation is
		referenced by name.
	*/
	void ChromaAnimationAPI::ReverseAllFramesName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::ReverseAllFramesName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::ReverseAllFramesNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::ReverseAllFramesNameD(wstr_Path.c_str());
	}
	/*
		Save the animation referenced by id to the path specified.
	*/
	int ChromaAnimationAPI::SaveAnimation(int animationId, const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SaveAnimation(animationId, wstr_Path.c_str());
	}
	/*
		Save the named animation to the target path specified.
	*/
	int ChromaAnimationAPI::SaveAnimationName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::SaveAnimationName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		Set the animation color for a frame given the `1D` `led`. The `led` should
		be greater than or equal to 0 and less than the `MaxLeds`. The animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::Set1DColor(int animationId, int frameId, int led, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::Set1DColor(animationId, frameId, led, color);
	}
	/*
		Set the animation color for a frame given the `1D` `led`. The `led` should
		be greater than or equal to 0 and less than the `MaxLeds`. The animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::Set1DColorName(const char* path, int frameId, int led, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::Set1DColorName(wstr_Path.c_str(), frameId, led, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::Set1DColorNameD(const char* path, double frameId, double led, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::Set1DColorNameD(wstr_Path.c_str(), frameId, led, color);
	}
	/*
		Set the animation color for a frame given the `2D` `row` and `column`. The
		`row` should be greater than or equal to 0 and less than the `MaxRow`.
		The `column` should be greater than or equal to 0 and less than the `MaxColumn`.
		The animation is referenced by id.
	*/
	void ChromaAnimationAPI::Set2DColor(int animationId, int frameId, int row, int column, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::Set2DColor(animationId, frameId, row, column, color);
	}
	/*
		Set the animation color for a frame given the `2D` `row` and `column`. The
		`row` should be greater than or equal to 0 and less than the `MaxRow`.
		The `column` should be greater than or equal to 0 and less than the `MaxColumn`.
		The animation is referenced by name.
	*/
	void ChromaAnimationAPI::Set2DColorName(const char* path, int frameId, int row, int column, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::Set2DColorName(wstr_Path.c_str(), frameId, row, column, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::Set2DColorNameD(const char* path, double frameId, double rowColumnIndex, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::Set2DColorNameD(wstr_Path.c_str(), frameId, rowColumnIndex, color);
	}
	/*
		When custom color is set, the custom key mode will be used. The animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetChromaCustomColorAllFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetChromaCustomColorAllFrames(animationId);
	}
	/*
		When custom color is set, the custom key mode will be used. The animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetChromaCustomColorAllFramesName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetChromaCustomColorAllFramesName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetChromaCustomColorAllFramesNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SetChromaCustomColorAllFramesNameD(wstr_Path.c_str());
	}
	/*
		Set the Chroma custom key color flag on all frames. `True` changes the layout
		from grid to key. `True` changes the layout from key to grid. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetChromaCustomFlag(int animationId, bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetChromaCustomFlag(animationId, flag);
	}
	/*
		Set the Chroma custom key color flag on all frames. `True` changes the layout
		from grid to key. `True` changes the layout from key to grid. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetChromaCustomFlagName(const char* path, bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetChromaCustomFlagName(wstr_Path.c_str(), flag);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetChromaCustomFlagNameD(const char* path, double flag)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SetChromaCustomFlagNameD(wstr_Path.c_str(), flag);
	}
	/*
		Set the current frame of the animation referenced by id.
	*/
	void ChromaAnimationAPI::SetCurrentFrame(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetCurrentFrame(animationId, frameId);
	}
	/*
		Set the current frame of the animation referenced by name.
	*/
	void ChromaAnimationAPI::SetCurrentFrameName(const char* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetCurrentFrameName(wstr_Path.c_str(), frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetCurrentFrameNameD(const char* path, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SetCurrentFrameNameD(wstr_Path.c_str(), frameId);
	}
	/*
		Set the custom alpha flag on the color array
	*/
	RZRESULT ChromaAnimationAPI::SetCustomColorFlag2D(int device, int* colors)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetCustomColorFlag2D(device, colors);
	}
	/*
		Changes the `deviceType` and `device` of a `Chroma` animation. If the device
		is changed, the `Chroma` animation will be reset with 1 blank frame. Returns
		the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::SetDevice(int animationId, int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetDevice(animationId, deviceType, device);
	}
	/*
		SetEffect will display the referenced effect id.
	*/
	RZRESULT ChromaAnimationAPI::SetEffect(const ChromaSDK::FChromaSDKGuid& effectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetEffect(effectId);
	}
	/*
		SetEffectCustom1D will display the referenced colors immediately
	*/
	RZRESULT ChromaAnimationAPI::SetEffectCustom1D(const int device, const int* colors)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetEffectCustom1D(device, colors);
	}
	/*
		SetEffectCustom2D will display the referenced colors immediately.
	*/
	RZRESULT ChromaAnimationAPI::SetEffectCustom2D(const int device, const int* colors)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetEffectCustom2D(device, colors);
	}
	/*
		SetEffectKeyboardCustom2D will display the referenced custom keyboard colors
		immediately. Colors represent a visual grid layout. Keys represent the
		hotkeys for any layout.
	*/
	RZRESULT ChromaAnimationAPI::SetEffectKeyboardCustom2D(const int device, const int* colors, const int* keys)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetEffectKeyboardCustom2D(device, colors, keys);
	}
	/*
		When the idle animation is used, the named animation will play when no other
		animations are playing. Reference the animation by id.
	*/
	void ChromaAnimationAPI::SetIdleAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetIdleAnimation(animationId);
	}
	/*
		When the idle animation is used, the named animation will play when no other
		animations are playing. Reference the animation by name.
	*/
	void ChromaAnimationAPI::SetIdleAnimationName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetIdleAnimationName(wstr_Path.c_str());
	}
	/*
		Set animation key to a static color for the given frame.
	*/
	void ChromaAnimationAPI::SetKeyColor(int animationId, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColor(animationId, frameId, rzkey, color);
	}
	/*
		Set the key to the specified key color for all frames. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::SetKeyColorAllFrames(int animationId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColorAllFrames(animationId, rzkey, color);
	}
	/*
		Set the key to the specified key color for all frames. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::SetKeyColorAllFramesName(const char* path, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeyColorAllFramesName(wstr_Path.c_str(), rzkey, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyColorAllFramesNameD(const char* path, double rzkey, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SetKeyColorAllFramesNameD(wstr_Path.c_str(), rzkey, color);
	}
	/*
		Set the key to the specified key color for all frames. Animation is referenced
		by id.
	*/
	void ChromaAnimationAPI::SetKeyColorAllFramesRGB(int animationId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColorAllFramesRGB(animationId, rzkey, red, green, blue);
	}
	/*
		Set the key to the specified key color for all frames. Animation is referenced
		by name.
	*/
	void ChromaAnimationAPI::SetKeyColorAllFramesRGBName(const char* path, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeyColorAllFramesRGBName(wstr_Path.c_str(), rzkey, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyColorAllFramesRGBNameD(const char* path, double rzkey, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SetKeyColorAllFramesRGBNameD(wstr_Path.c_str(), rzkey, red, green, blue);
	}
	/*
		Set animation key to a static color for the given frame.
	*/
	void ChromaAnimationAPI::SetKeyColorName(const char* path, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeyColorName(wstr_Path.c_str(), frameId, rzkey, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyColorNameD(const char* path, double frameId, double rzkey, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SetKeyColorNameD(wstr_Path.c_str(), frameId, rzkey, color);
	}
	/*
		Set the key to the specified key color for the specified frame. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeyColorRGB(int animationId, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColorRGB(animationId, frameId, rzkey, red, green, blue);
	}
	/*
		Set the key to the specified key color for the specified frame. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeyColorRGBName(const char* path, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeyColorRGBName(wstr_Path.c_str(), frameId, rzkey, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyColorRGBNameD(const char* path, double frameId, double rzkey, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SetKeyColorRGBNameD(wstr_Path.c_str(), frameId, rzkey, red, green, blue);
	}
	/*
		Set animation key to a static color for the given frame if the existing
		color is not already black.
	*/
	void ChromaAnimationAPI::SetKeyNonZeroColor(int animationId, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyNonZeroColor(animationId, frameId, rzkey, color);
	}
	/*
		Set animation key to a static color for the given frame if the existing
		color is not already black.
	*/
	void ChromaAnimationAPI::SetKeyNonZeroColorName(const char* path, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeyNonZeroColorName(wstr_Path.c_str(), frameId, rzkey, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyNonZeroColorNameD(const char* path, double frameId, double rzkey, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SetKeyNonZeroColorNameD(wstr_Path.c_str(), frameId, rzkey, color);
	}
	/*
		Set the key to the specified key color for the specified frame where color
		is not black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeyNonZeroColorRGB(int animationId, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyNonZeroColorRGB(animationId, frameId, rzkey, red, green, blue);
	}
	/*
		Set the key to the specified key color for the specified frame where color
		is not black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeyNonZeroColorRGBName(const char* path, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeyNonZeroColorRGBName(wstr_Path.c_str(), frameId, rzkey, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyNonZeroColorRGBNameD(const char* path, double frameId, double rzkey, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SetKeyNonZeroColorRGBNameD(wstr_Path.c_str(), frameId, rzkey, red, green, blue);
	}
	/*
		Set animation key by row and column to a static color for the given frame.
	*/
	void ChromaAnimationAPI::SetKeyRowColumnColorName(const char* path, int frameId, int row, int column, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeyRowColumnColorName(wstr_Path.c_str(), frameId, row, column, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColor(animationId, frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColorAllFrames(animationId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysColorAllFramesName(const char* path, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeysColorAllFramesName(wstr_Path.c_str(), rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysColorAllFramesRGB(int animationId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColorAllFramesRGB(animationId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for all frames. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysColorAllFramesRGBName(const char* path, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeysColorAllFramesRGBName(wstr_Path.c_str(), rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame.
	*/
	void ChromaAnimationAPI::SetKeysColorName(const char* path, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeysColorName(wstr_Path.c_str(), frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame. Animation
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysColorRGB(int animationId, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColorRGB(animationId, frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame. Animation
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysColorRGBName(const char* path, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeysColorRGBName(wstr_Path.c_str(), frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame if
		the existing color is not already black.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysNonZeroColor(animationId, frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame where
		the color is not black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysNonZeroColorAllFrames(animationId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames if the existing
		color is not already black. Reference animation by name.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColorAllFramesName(const char* path, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeysNonZeroColorAllFramesName(wstr_Path.c_str(), rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame if
		the existing color is not already black. Reference animation by name.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColorName(const char* path, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeysNonZeroColorName(wstr_Path.c_str(), frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame where
		the color is not black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColorRGB(int animationId, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysNonZeroColorRGB(animationId, frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame where
		the color is not black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColorRGBName(const char* path, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeysNonZeroColorRGBName(wstr_Path.c_str(), frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame where
		the color is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysZeroColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColor(animationId, frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames where the
		color is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColorAllFrames(animationId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames where the
		color is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorAllFramesName(const char* path, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeysZeroColorAllFramesName(wstr_Path.c_str(), rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames where the
		color is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorAllFramesRGB(int animationId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColorAllFramesRGB(animationId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for all frames where the
		color is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorAllFramesRGBName(const char* path, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeysZeroColorAllFramesRGBName(wstr_Path.c_str(), rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame where
		the color is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorName(const char* path, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeysZeroColorName(wstr_Path.c_str(), frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame where
		the color is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorRGB(int animationId, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColorRGB(animationId, frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame where
		the color is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorRGBName(const char* path, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeysZeroColorRGBName(wstr_Path.c_str(), frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set animation key to a static color for the given frame where the color
		is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeyZeroColor(int animationId, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyZeroColor(animationId, frameId, rzkey, color);
	}
	/*
		Set animation key to a static color for the given frame where the color
		is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeyZeroColorName(const char* path, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeyZeroColorName(wstr_Path.c_str(), frameId, rzkey, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyZeroColorNameD(const char* path, double frameId, double rzkey, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SetKeyZeroColorNameD(wstr_Path.c_str(), frameId, rzkey, color);
	}
	/*
		Set animation key to a static color for the given frame where the color
		is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeyZeroColorRGB(int animationId, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyZeroColorRGB(animationId, frameId, rzkey, red, green, blue);
	}
	/*
		Set animation key to a static color for the given frame where the color
		is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeyZeroColorRGBName(const char* path, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SetKeyZeroColorRGBName(wstr_Path.c_str(), frameId, rzkey, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyZeroColorRGBNameD(const char* path, double frameId, double rzkey, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SetKeyZeroColorRGBNameD(wstr_Path.c_str(), frameId, rzkey, red, green, blue);
	}
	/*
		Invokes the setup for a debug logging callback so that `stdout` is redirected
		to the callback. This is used by `Unity` so that debug messages can appear
		in the console window.
	*/
	void ChromaAnimationAPI::SetLogDelegate(DebugLogPtr fp)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetLogDelegate(fp);
	}
	/*
		Sets the target device to the static color.
	*/
	void ChromaAnimationAPI::SetStaticColor(int deviceType, int device, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetStaticColor(deviceType, device, color);
	}
	/*
		Sets all devices to the static color.
	*/
	void ChromaAnimationAPI::SetStaticColorAll(int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetStaticColorAll(color);
	}
	/*
		Sets the target device to the static color.
	*/
	void ChromaAnimationAPI::StaticColor(int deviceType, int device, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::StaticColor(deviceType, device, color);
	}
	/*
		Sets all devices to the static color.
	*/
	void ChromaAnimationAPI::StaticColorAll(int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::StaticColorAll(color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::StaticColorD(double deviceType, double device, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::StaticColorD(deviceType, device, color);
	}
	/*
		`PluginStopAll` will automatically stop all animations that are playing.
	*/
	void ChromaAnimationAPI::StopAll()
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::StopAll();
	}
	/*
		Stops animation playback if in progress. Returns the animation id upon success.
		Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::StopAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::StopAnimation(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::StopAnimationD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::StopAnimationD(animationId);
	}
	/*
		`PluginStopAnimationName` automatically handles initializing the `ChromaSDK`.
		The named `.chroma` animation file will be automatically opened. The animation
		will stop if playing.
	*/
	void ChromaAnimationAPI::StopAnimationName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::StopAnimationName(wstr_Path.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::StopAnimationNameD(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::StopAnimationNameD(wstr_Path.c_str());
	}
	/*
		`PluginStopAnimationType` automatically handles initializing the `ChromaSDK`.
		If any animation is playing for the `deviceType` and `device` combination,
		it will be stopped.
	*/
	void ChromaAnimationAPI::StopAnimationType(int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::StopAnimationType(deviceType, device);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::StopAnimationTypeD(double deviceType, double device)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::StopAnimationTypeD(deviceType, device);
	}
	/*
		`PluginStopComposite` automatically handles initializing the `ChromaSDK`.
		The named animation files for the `.chroma` set will be automatically opened.
		The set of animations will be stopped if playing.
	*/
	void ChromaAnimationAPI::StopComposite(const char* name)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Name = name;
		wstring wstr_Name(str_Name.begin(), str_Name.end());
		UnicodeChromaAnimationAPI::StopComposite(wstr_Name.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::StopCompositeD(const char* name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Name = name;
		wstring wstr_Name(str_Name.begin(), str_Name.end());
		return UnicodeChromaAnimationAPI::StopCompositeD(wstr_Name.c_str());
	}
	/*
		Return color1 - color2
	*/
	int ChromaAnimationAPI::SubtractColor(const int color1, const int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::SubtractColor(color1, color2);
	}
	/*
		Subtract the source color from the target color for the frame where the
		target color is not black. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Subtract the source color from the target color for all frames where the
		target color is not black. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Subtract the source color from the target color for all frames where the
		target color is not black. Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		Subtract the source color from the target color for all frames where the
		target color is not black starting at offset for the length of the source.
		Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Subtract the source color from the target color for all frames where the
		target color is not black starting at offset for the length of the source.
		Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffsetName(const char* sourceAnimation, const char* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		Subtract the source color from the target color for the frame where the
		target color is not black. Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysName(const char* sourceAnimation, const char* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId);
	}
	/*
		Subtract the source color from the target where color is not black for the
		source frame and target offset frame, reference source and target by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Subtract the source color from the target where color is not black for the
		source frame and target offset frame, reference source and target by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysOffsetName(const char* sourceAnimation, const char* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroAllKeysOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		Subtract the source color from the target color where the target color is
		not black for all frames. Reference source and target by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Subtract the source color from the target color where the target color is
		not black for all frames. Reference source and target by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesName(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesNameD(const char* sourceAnimation, const char* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str());
	}
	/*
		Subtract the source color from the target color where the target color is
		not black for all frames starting at the target offset for the length of
		the source. Reference source and target by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Subtract the source color from the target color where the target color is
		not black for all frames starting at the target offset for the length of
		the source. Reference source and target by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffsetName(const char* sourceAnimation, const char* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), offset);
	}
	/*
		Subtract the source color from the target color where the target color is
		not black from the source frame to the target offset frame. Reference source
		and target by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Subtract the source color from the target color where the target color is
		not black from the source frame to the target offset frame. Reference source
		and target by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffsetName(const char* sourceAnimation, const char* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffsetName(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffsetNameD(const char* sourceAnimation, const char* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_SourceAnimation = sourceAnimation;
		wstring wstr_SourceAnimation(str_SourceAnimation.begin(), str_SourceAnimation.end());
		string str_TargetAnimation = targetAnimation;
		wstring wstr_TargetAnimation(str_TargetAnimation.begin(), str_TargetAnimation.end());
		return UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffsetNameD(wstr_SourceAnimation.c_str(), wstr_TargetAnimation.c_str(), frameId, offset);
	}
	/*
		Subtract all frames with the min RGB color where the animation color is
		less than the min threshold AND with the max RGB color where the animation
		is more than the max threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGB(const int animationId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGB(animationId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Subtract all frames with the min RGB color where the animation color is
		less than the min threshold AND with the max RGB color where the animation
		is more than the max threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGBName(const char* path, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGBName(wstr_Path.c_str(), minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGBNameD(const char* path, double minThreshold, double minRed, double minGreen, double minBlue, double maxThreshold, double maxRed, double maxGreen, double maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGBNameD(wstr_Path.c_str(), minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Subtract the specified frame with the min RGB color where the animation
		color is less than the min threshold AND with the max RGB color where the
		animation is more than the max threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SubtractThresholdColorsMinMaxRGB(const int animationId, const int frameId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxRGB(animationId, frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Subtract the specified frame with the min RGB color where the animation
		color is less than the min threshold AND with the max RGB color where the
		animation is more than the max threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SubtractThresholdColorsMinMaxRGBName(const char* path, const int frameId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxRGBName(wstr_Path.c_str(), frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractThresholdColorsMinMaxRGBNameD(const char* path, const int frameId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxRGBNameD(wstr_Path.c_str(), frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Trim the end of the animation. The length of the animation will be the lastFrameId
		plus one. Reference the animation by id.
	*/
	void ChromaAnimationAPI::TrimEndFrames(int animationId, int lastFrameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::TrimEndFrames(animationId, lastFrameId);
	}
	/*
		Trim the end of the animation. The length of the animation will be the lastFrameId
		plus one. Reference the animation by name.
	*/
	void ChromaAnimationAPI::TrimEndFramesName(const char* path, int lastFrameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::TrimEndFramesName(wstr_Path.c_str(), lastFrameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::TrimEndFramesNameD(const char* path, double lastFrameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::TrimEndFramesNameD(wstr_Path.c_str(), lastFrameId);
	}
	/*
		Remove the frame from the animation. Reference animation by id.
	*/
	void ChromaAnimationAPI::TrimFrame(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::TrimFrame(animationId, frameId);
	}
	/*
		Remove the frame from the animation. Reference animation by name.
	*/
	void ChromaAnimationAPI::TrimFrameName(const char* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::TrimFrameName(wstr_Path.c_str(), frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::TrimFrameNameD(const char* path, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::TrimFrameNameD(wstr_Path.c_str(), frameId);
	}
	/*
		Trim the start of the animation starting at frame 0 for the number of frames.
		Reference the animation by id.
	*/
	void ChromaAnimationAPI::TrimStartFrames(int animationId, int numberOfFrames)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::TrimStartFrames(animationId, numberOfFrames);
	}
	/*
		Trim the start of the animation starting at frame 0 for the number of frames.
		Reference the animation by name.
	*/
	void ChromaAnimationAPI::TrimStartFramesName(const char* path, int numberOfFrames)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::TrimStartFramesName(wstr_Path.c_str(), numberOfFrames);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::TrimStartFramesNameD(const char* path, double numberOfFrames)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::TrimStartFramesNameD(wstr_Path.c_str(), numberOfFrames);
	}
	/*
		Uninitializes the `ChromaSDK`. Returns 0 upon success. Returns negative
		one upon failure.
	*/
	RZRESULT ChromaAnimationAPI::Uninit()
	{
		if (!_sIsInitializedAPI)
		{
			return RZRESULT_SUCCESS;
		}
		if (!_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::Uninit();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = false;
		}
		return result;
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::UninitD()
	{
		if (!_sIsInitializedAPI)
		{
			return RZRESULT_SUCCESS;
		}
		if (!_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::UninitD();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = false;
		}
		return result;
	}
	/*
		Unloads `Chroma` effects to free up resources. Returns the animation id
		upon success. Returns negative one upon failure. Reference the animation
		by id.
	*/
	int ChromaAnimationAPI::UnloadAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::UnloadAnimation(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::UnloadAnimationD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::UnloadAnimationD(animationId);
	}
	/*
		Unload the animation effects. Reference the animation by name.
	*/
	void ChromaAnimationAPI::UnloadAnimationName(const char* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::UnloadAnimationName(wstr_Path.c_str());
	}
	/*
		Unload the the composite set of animation effects. Reference the animation
		by name.
	*/
	void ChromaAnimationAPI::UnloadComposite(const char* name)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Name = name;
		wstring wstr_Name(str_Name.begin(), str_Name.end());
		UnicodeChromaAnimationAPI::UnloadComposite(wstr_Name.c_str());
	}
	/*
		Unload the Razer Chroma SDK Library before exiting the application.
	*/
	void ChromaAnimationAPI::UnloadLibrarySDK()
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UnloadLibrarySDK();
	}
	/*
		Unload the Razer Chroma Streaming Plugin Library before exiting the application.
	*/
	void ChromaAnimationAPI::UnloadLibraryStreamingPlugin()
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UnloadLibraryStreamingPlugin();
	}
	/*
		Updates the `frameId` of the `Chroma` animation referenced by id and sets
		the `duration` (in seconds). The `color` is expected to be an array of
		the dimensions for the `deviceType/device`. The `length` parameter is the
		size of the `color` array. For `EChromaSDKDevice1DEnum` the array size
		should be `MAX LEDS`. For `EChromaSDKDevice2DEnum` the array size should
		be `MAX ROW` times `MAX COLUMN`. Keys are populated only for EChromaSDKDevice2DEnum::DE_Keyboard
		and EChromaSDKDevice2DEnum::DE_KeyboardExtended. Keys will only use the
		EChromaSDKDevice2DEnum::DE_Keyboard `MAX_ROW` times `MAX_COLUMN` keysLength.
	*/
	int ChromaAnimationAPI::UpdateFrame(int animationId, int frameId, float duration, int* colors, int length, int* keys, int keysLength)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::UpdateFrame(animationId, frameId, duration, colors, length, keys, keysLength);
	}
	/*
		Update the `frameId` of the `Chroma` animation referenced by name and sets
		the `duration` (in seconds). The `color` is expected to be an array of
		the dimensions for the `deviceType/device`. The `length` parameter is the
		size of the `color` array. For `EChromaSDKDevice1DEnum` the array size
		should be `MAX LEDS`. For `EChromaSDKDevice2DEnum` the array size should
		be `MAX ROW` times `MAX COLUMN`. Keys are populated only for EChromaSDKDevice2DEnum::DE_Keyboard
		and EChromaSDKDevice2DEnum::DE_KeyboardExtended. Keys will only use the
		EChromaSDKDevice2DEnum::DE_Keyboard `MAX_ROW` times `MAX_COLUMN` keysLength.
		Returns the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::UpdateFrameName(const char* path, int frameId, float duration, int* colors, int length, int* keys, int keysLength)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		return UnicodeChromaAnimationAPI::UpdateFrameName(wstr_Path.c_str(), frameId, duration, colors, length, keys, keysLength);
	}
	/*
		On by default, `UseForwardChromaEvents` sends the animation name to `CoreSetEventName`
		automatically when `PlayAnimationName` is called.
	*/
	void ChromaAnimationAPI::UseForwardChromaEvents(bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UseForwardChromaEvents(flag);
	}
	/*
		When the idle animation flag is true, when no other animations are playing,
		the idle animation will be used. The idle animation will not be affected
		by the API calls to PluginIsPlaying, PluginStopAnimationType, PluginGetPlayingAnimationId,
		and PluginGetPlayingAnimationCount. Then the idle animation flag is false,
		the idle animation is disabled. `Device` uses `EChromaSDKDeviceEnum` enums.
	*/
	void ChromaAnimationAPI::UseIdleAnimation(int device, bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UseIdleAnimation(device, flag);
	}
	/*
		Set idle animation flag for all devices.
	*/
	void ChromaAnimationAPI::UseIdleAnimations(bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UseIdleAnimations(flag);
	}
	/*
		Set preloading animation flag, which is set to true by default. Reference
		animation by id.
	*/
	void ChromaAnimationAPI::UsePreloading(int animationId, bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UsePreloading(animationId, flag);
	}
	/*
		Set preloading animation flag, which is set to true by default. Reference
		animation by name.
	*/
	void ChromaAnimationAPI::UsePreloadingName(const char* path, bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		string str_Path = path;
		wstring wstr_Path(str_Path.begin(), str_Path.end());
		UnicodeChromaAnimationAPI::UsePreloadingName(wstr_Path.c_str(), flag);
	}
#pragma endregion

}
