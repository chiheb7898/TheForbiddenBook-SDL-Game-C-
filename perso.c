#include "perso.h"
void init_perso(perso *p)
{
    int i;
    p->sprite=IMG_Load("spriteperso.png");
    p->rcSprite.x=100;
    p->rcSprite.y=420;
    p->rect.x=0;
    p->rect.y=0;
    p->rcSrc[0].x=0;
    p->rcSrc[0].y=0;
    p->rcSrc[0].w=150;
    p->rcSrc[0].h=250;
    for(i=1; i<5; i++)
    {
        p->rcSrc[i].x=p->rcSrc[i-1].x+p->rcSrc[i-1].w;
        p->rcSrc[i].y=0;
        p->rcSrc[i].w=150;
        p->rcSrc[i].h=250;

    }
    p->frame=0;
}
void annimer_persoright(perso *p)
{
    if (p->frame>3)
        p->frame=0;
    p->rect=p->rcSrc[p->frame];
    p->frame++;

}
/*void annimer_persoleft(perso *p)
{
    p->rcSprite.x-=5;
    if (p->rcSrc.x==0)
        p->rcSrc.x=95.72;
    else
        p->rcSrc.x =0;
}*/
void afficher_perso(perso *p,SDL_Surface *screen)
{
    SDL_BlitSurface(p->sprite,&p->rect,screen,&p->rcSprite);
}
