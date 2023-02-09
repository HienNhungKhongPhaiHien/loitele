#pragma once
#include <iostream>
#include <vector>
#include<SDL.h>
#include <SDL_image.h>

#include "Math.hpp"

class Entity
{
public:
    Entity(Vector2f p_pos, SDL_Texture* p_tex, float in_w, float in_h);
    Vector2f& getPos(){
        return pos;
    }
    SDL_Rect getCurrentFrame();
    SDL_Texture* getTex();
    void handdleInputAction(SDL_Event e);
    void handdleMove();
protected:
    Vector2f pos;
    SDL_Rect currentFrame;
    SDL_Texture* tex;
    float x_val;
    float y_val;

};
