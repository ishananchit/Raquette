#pragma once
#include "Core.h"

namespace Raquette
{
	class RAQUETTE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	Application* CreateApplication();
}

