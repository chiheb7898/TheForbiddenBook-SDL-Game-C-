#include "includes.h"
void init_hpp(hpp *h,int x, int y)
{
    int i;
    char ch[50];
    for (i=0; i<41; i++)
    {
        sprintf(ch,"health_potion/%d.png",i);
        h->tab[i]=IMG_Load(ch);
    }
    h->exist=1;
    h->pos.x=x;
    h->pos.y=y;
    h->frame=0;
}
/********************************************************************************************************/
/********************************************************************************************************/
void animer_hpp(hpp *h)
{
    if(h->frame==40)
        h->frame=0;
    else
        h->frame++;
}
/********************************************************************************************************/
void afficher_hpp(SDL_Surface *screen,hpp h,background b)
{
    SDL_Rect posh= {h.pos.x-b.camera.x,h.pos.y};
    if (h.exist)
        SDL_BlitSurface(h.tab[h.frame],NULL,screen,&posh);
}
