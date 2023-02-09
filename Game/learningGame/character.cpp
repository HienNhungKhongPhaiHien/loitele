/*#include "Character.hpp"

using namespace std;

gameCharacter::gameCharacter(Vector2f p_pos, SDL_Texture* p_tex, float w, float h)
    :pos(p_pos), tex(p_tex)
{
    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = w;
    currentFrame.h = h;
}

SDL_Rect gameCharacter::getCurrentFrame(){
    return currentFrame;
}
SDL_Texture* gameCharacter::getTex(){
    return tex;
}
void gameCharacter::handdleInputAction(SDL_Event e){
        x_val = 0;
        y_val = 0;
    if(e.type == SDL_KEYDOWN){
        switch(e.key.keysym.sym){
        case SDLK_UP:
                y_val -= 32;
            break;
        case SDLK_DOWN:
                y_val += 32;
            break;
        case SDLK_RIGHT:
                x_val += 32;
            break;
        case SDLK_LEFT:
                x_val -= 32;
            break;
        default:
            break;
        }
    }
    else if(e.type == SDL_KEYUP){

    }else if(e.type == SDL_MOUSEBUTTONDOWN){

    }else if(e.type == SDL_MOUSEBUTTONUP){

    }else{}
 }
 void gameCharacter::handdleMove(){
    pos.x += x_val;
    pos.y += y_val;
 }*/
