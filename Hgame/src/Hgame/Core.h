#pragma once
#ifdef HG_PLATFORM_WINDOWS
	#ifdef HG_BUILD_DLL
		#define HGAME_API __declspec(dllexport)
	#else
		#define HGAME_API __declspec(dllimport)
	#endif // HG_BUILD_DLL

#else
	#error Hgame only support Windows! 
#endif

