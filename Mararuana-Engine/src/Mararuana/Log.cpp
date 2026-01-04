#include "Log.h"
#include <spdlog/sinks/stdout_color_sinks.h>

namespace Mar
{
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		// Log pattern.
		spdlog::set_pattern("%^[%T] %n: %v%$");

		// Logger to be used by the core side.
		s_CoreLogger = spdlog::stdout_color_mt("MARARUANA");
		s_CoreLogger->set_level(spdlog::level::trace);

		// Logger to be used by the client side.
		s_ClientLogger = spdlog::stdout_color_mt("SANDBOX");
		s_ClientLogger->set_level(spdlog::level::trace);

		// Informs if the logging system was initialized properly.
		s_CoreLogger->info("Core Logger initialized successfully!");
		s_ClientLogger->info("Client Logger initialized successfully!");
	}
}