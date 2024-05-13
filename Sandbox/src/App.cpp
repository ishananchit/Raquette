#include "Raquette.h"

class Sandbox : public Raquette::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Raquette::Application* Raquette::CreateApplication()
{
	return new Sandbox();
}