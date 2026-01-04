#pragma once

#include <memory>
#include <spdlog/spdlog.h>

namespace Mar
{
	class Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros ------------------------------------------------------------------
#define MAR_CORE_FATAL(...)		::Mar::Log::GetCoreLogger()->critical(__VA_ARGS__)
#define MAR_CORE_ERROR(...)		::Mar::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MAR_CORE_WARN(...)		::Mar::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MAR_CORE_INFO(...)		::Mar::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MAR_CORE_TRACE(...)		::Mar::Log::GetCoreLogger()->trace(__VA_ARGS__)
//-----------------------------------------------------------------------------------

// Client log macros ----------------------------------------------------------------
#define MAR_CLIENT_FATAL(...)	::Mar::Log::GetClientLogger()->critical(__VA_ARGS__)
#define MAR_CLIENT_ERROR(...)	::Mar::Log::GetClientLogger()->error(__VA_ARGS__)
#define MAR_CLIENT_WARN(...)	::Mar::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MAR_CLIENT_INFO(...)	::Mar::Log::GetClientLogger()->info(__VA_ARGS__)
#define MAR_CLIENT_TRACE(...)	::Mar::Log::GetClientLogger()->trace(__VA_ARGS__)
//------------------------------------------------------------------------------------