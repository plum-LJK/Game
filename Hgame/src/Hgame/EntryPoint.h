#pragma once
#ifdef HG_PLATFORM_WINDOWS

extern Hgame::Application* Hgame::CreateApplication();

int main(int argc, char** argv)
{
	
	auto app = Hgame::CreateApplication();
	app->Run();
	delete app;
}
#endif // HG_PLATFORM_WINDOWS
