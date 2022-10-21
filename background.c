#include "includes.h"
void initialiser_backround (background *b,int x)
{
b->backgroundi=IMG_Load("background/ground.png");
b->pos.x=x;
b->pos.y=0;
b->camera.x=0;
b->camera.y=0;
b->camera.w=1080;
b->camera.h=720;
}
/******************************************************************************************************/
/******************************************************************************************************/
void afficher_background (SDL_Surface *screen,background *b)
{
SDL_BlitSurface(b->backgroundi,&b->camera,screen,NULL);
}
/*****************************************************************************************************/
/*****************************************************************************************************/
