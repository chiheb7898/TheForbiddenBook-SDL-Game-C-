#include "includes.h"
void scroll(SDL_Event e,SDL_Rect *b)
{
    if(e.key.keysym.sym==SDLK_RIGHT)
    {
       b->x+=20;
    }
    else if((e.key.keysym.sym==SDLK_LEFT)&&((*b).x>0))
    {
        b->x-=20;
    }
}
