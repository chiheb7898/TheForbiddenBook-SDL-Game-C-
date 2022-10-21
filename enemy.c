#include"includes.h"
#include "enemy.h"
void init_enemy(enemie *e,int x,int y)
{
    int i;
    e->frame=0;
    e->enemie=IMG_Load("enemy/enemy1.png");
    e->direction=2;
    e->pos.x=x;
    e->pos.y=y;
    e->rect.x=0;
    e->rect.y=0;
    e->rects[0].x=44;
    e->rects[0].y=837;
    e->rects[0].h=150;
    e->rects[0].w=120;
    for(i=1; i<5; i++)
    {
        e->rects[i].x=(e->rects[i-1].x)+(e->rects[i-1].w);
        e->rects[i].y=837;
        e->rects[i].h=150;
        e->rects[i].w=120;
    }
}
void animation_hold (enemie *e)
{
    if (e->frame>4)
        e->frame=0;
    e->rect=e->rects[e->frame];
    e->frame++;
   // SDL_Delay(900);
}
void afficher_enemy(enemie *e,SDL_Surface *screen)
{
    SDL_BlitSurface(e->enemie,&e->rect,screen,&e->pos);
}
