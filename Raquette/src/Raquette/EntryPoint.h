#pragma once

#ifdef RQ_PLATFORM_WINDOWS

extern Raquette::Application* Raquette::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Raquette::CreateApplication();
	app->Run();
	delete app;
}
#endif