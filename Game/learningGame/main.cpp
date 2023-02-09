#include <iostream>
#include <vector>
#include <SDL.h>
#include <SDL_image.h>

#include "RenderWindow.hpp"
#include "Entity.hpp"

using namespace std;

int main(int argc, char* argv[]){
    if((SDL_Init(SDL_INIT_EVERYTHING)) > 0 ){
       cout << "SDL_Init failed" <<  SDL_GetError() << endl;
    }
    RenderWindow window("Game v1.1", WINDOW_WIDTH, WINDOW_HEIGHT);

    SDL_Texture* bckgrTexture = window.loadTexture("pxGrass.png");
    SDL_Texture* charObject = window.loadTexture("charDemo.png");

    Entity backgroundImage(Vector2f(0, 0), bckgrTexture, 32, 32);
    Entity charInGame1(Vector2f(300, 300), charObject, 64 , 64);



    /*Entity entities[3] = {Entity(0, 0, bckgrTexture),
                          Entity(32 * 4, 0, bckgrTexture),
                          Entity(64 * 4, 0, bckgrTexture)};*/
   /* vector<Entity> entities = {Entity(Vector2f(0, 0), bckgrTexture),
                               Entity(Vector2f(32 * 4 , 0), bckgrTexture),
                               Entity(Vector2f(64 * 4, 0), bckgrTexture),
                               Entity(Vector2f(96 * 4, 0), bckgrTexture)};
        {
            Entity test(Vector2f(128 * 4, 0), bckgrTexture);
            entities.push_back(test);

        }*/
        /* for(Entity& p : entities){
                window.render(p);
                }

            window.display();*/





    SDL_Event e;

    bool gameRunning = true;
    while(gameRunning){
            while(SDL_PollEvent(&e)){
                if(e.type == SDL_QUIT ){
                    gameRunning = false;
                }
                charInGame1.handdleInputAction(e);
            }
             window.clearWindow();
             charInGame1.handdleMove();
             window.render(backgroundImage, 1200, 800);
             window.render(charInGame1, 64 * 4, 64 * 4);
             window.display();

    }
    window.cleanUp();
    SDL_Quit();

    return 0;
}
