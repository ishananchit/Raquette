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


#define RQ_CORE_TRACE(...)     ::Raquette::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define RQ_CORE_INFO(...)      ::Raquette::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RQ_CORE_WARN(...)      ::Raquette::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RQ_CORE_ERROR(...)     ::Raquette::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RQ_CORE_FATAL(...)     ::Raquette::Log::GetCoreLogger()->critical(__VA_ARGS__)

#define RQ_TRACE(...)          ::Raquette::Log::GetClientLogger()->trace(__VA_ARGS__)
#define RQ_INFO(...)           ::Raquette::Log::GetClientLogger()->info(__VA_ARGS__)
#define RQ_WARN(...)           ::Raquette::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RQ_ERROR(...)          ::Raquette::Log::GetClientLogger()->error(__VA_ARGS__)
#define RQ_FATAL(...)          ::Raquette::Log::GetClientLogger()->critical(__VA_ARGS__)
