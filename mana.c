#include"includes.h"
void init_mana(mana *m,int x, int y)
{
    int i;
    char ch[50];
    for (i=0; i<40; i++)
    {
        sprintf(ch,"mana/%d.png",i);
        m->tab[i]=IMG_Load(ch);
    }
    m->exist=1;
    m->pos.x=x;
    m->pos.y=y;
    m->frame=0;
}
/********************************************************************************************************/
/********************************************************************************************************/
void animer_mana(mana *m)
{
    if(m->frame==39)
        m->frame=0;
    else
        m->frame++;
}
/********************************************************************************************************/
void afficher_mana(SDL_Surface *screen,mana m,background b)
{
    SDL_Rect posh= {m.pos.x-b.camera.x,m.pos.y};
    if (m.exist)
        SDL_BlitSurface(m.tab[m.frame],NULL,screen,&posh);
}
