#include "Hgame.h"
class Sandbox : public Hgame::Application
{
public:
	Sandbox()
	{


	}
	~Sandbox()
	{

	}

};

Hgame::Application* Hgame::CreateApplication()
{
	return new Sandbox();
}