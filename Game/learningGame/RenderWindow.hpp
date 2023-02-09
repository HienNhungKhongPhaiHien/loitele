#ifndef RENDERWINDOW_HPP_INCLUDED
#define RENDERWINDOW_HPP_INCLUDED
#pragma once
#include <SDL.h>
#include "Entity.hpp"
const int WINDOW_WIDTH = 1200;
const int WINDOW_HEIGHT = 800;

class RenderWindow
{
public:
    RenderWindow(const char* title, int w, int h);
    SDL_Texture* loadTexture(const char* filePath);
    void clearWindow();
    void render(Entity& p_entity, float out_w, float out_h);
    void display();
    void cleanUp();

private:
    SDL_Window* window;
    SDL_Renderer* renderer;


};




#endif // RENDERWINDOW_HPP_INCLUDED
