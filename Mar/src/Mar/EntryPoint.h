#pragma once

#ifdef MAR_PLATFORM_WINDOWS

extern Mar::Application* Mar::CreateApplication();

int main(int argc, char** argv)
{
	printf("Mar is running!");
	auto app = Mar::CreateApplication();
	app->Run();
	delete app;
}

#endif