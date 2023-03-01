#pragma once
#include "Core.h"
namespace Hgame {
	class HGAME_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	//To be defined in Client
	Application* CreateApplication();
}
