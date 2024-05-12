#pragma once

#ifdef RQ_PLATFORM_WINDOWS
	#ifdef RQ_BUILD_DLL
		#define RAQUETTE_API __declspec(dllexport)
	#else
		#define RAQUETTE_API __declspec(dllimport)
	#endif
#else
	#error Raquette only support Windows!
#endif