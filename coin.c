#include "includes.h"


void init_coin(coin *c,int x, int y)
{
	c->tab[0]=IMG_Load("coin/coin1.png");
	c->tab[1]=IMG_Load("coin/coin2.png");
	c->tab[2]=IMG_Load("coin/coin3.png");
	c->tab[3]=IMG_Load("coin/coin4.png");
	c->tab[4]=IMG_Load("coin/coin5.png");
	c->tab[5]=IMG_Load("coin/coin6.png");
	c->tab[6]=IMG_Load("coin/coin7.png");
	c->tab[7]=IMG_Load("coin/coin8.png");
c->exist=1;
	c->pos.x=x;
	c->pos.y=y;
	c->frame=0;
}
/********************************************************************************************************/
/********************************************************************************************************/
void animer_coin(coin *c)
{
	if(c->frame==7)
		c->frame=0;
	else
		c->frame++;
}
/********************************************************************************************************/
void afficher_coin(SDL_Surface *screen,coin c,background b)
{
    SDL_Rect poscoin={c.pos.x-b.camera.x,c.pos.y};
    if (c.exist)
        SDL_BlitSurface(c.tab[c.frame],NULL,screen,&poscoin);
}

