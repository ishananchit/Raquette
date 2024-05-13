#pragma once

#ifdef RQ_PLATFORM_WINDOWS

extern Raquette::Application* Raquette::CreateApplication();

int main(int argc, char** argv)
{
	Raquette::Log::Init();
	RQ_CORE_WARN("stfu");
	RQ_INFO("he did indeed stfu");

	auto app = Raquette::CreateApplication();
	app->Run();
	delete app;
}
#endif