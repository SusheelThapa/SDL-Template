#pragma once

#ifdef _WIN32
#include <SDL.h>

#elif __linux__
#include <SDL2/SDL.h>

#endif

#include <iostream>
#include <string>

class Window
{

private:
	std::string title;

	static const int width = 400;

	static const int height = 400;

	bool closed = false;

	SDL_Window *window = nullptr;

	SDL_Event e;

public:
	SDL_Renderer *renderer = nullptr;

private:
	bool init();

public:
	Window();
	Window(std::string);

	~Window();

	void handleEvent();

	void clear(SDL_Color color);

	void present();

	bool isWindowClosed();

	static const int getWidth();

	static const int getHeight();
};