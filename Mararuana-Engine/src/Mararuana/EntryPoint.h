#pragma once

extern Mar::Application* Mar::CreateApplication();

int main(int argc, char** argv)
{
	Mar::Log::Init();

	// Log test ---------------------------
	MAR_CORE_INFO("Macro is working!");
	MAR_CORE_TRACE("Macro is working!");
	MAR_CORE_WARN("Macro is working!");
	MAR_CORE_ERROR("Macro is working!");
	MAR_CORE_FATAL("Macro is working!");

	MAR_CLIENT_INFO("Macro is working!");
	MAR_CLIENT_TRACE("Macro is working!");
	MAR_CLIENT_WARN("Macro is working!");
	MAR_CLIENT_ERROR("Macro is working!");
	MAR_CLIENT_FATAL("Macro is working!");

	MAR_CORE_INFO("Hello Mararuana!");
	//-------------------------------------

	auto app = Mar::CreateApplication();
	app->Run();
	delete app;
}
