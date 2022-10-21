#ifndef DS5_H_INCLUDED
#define DS5_H_INCLUDED

#include "background.h"
typedef struct  coin
{
	SDL_Surface *tab[8];
	SDL_Rect pos;
	int frame;
	int exist;
}coin;
void init_coin(coin *c,int x, int y);
void animer_coin(coin *c);
void afficher_coin(SDL_Surface *screen,coin c,background b);
#endif // DS_H_INCLUDED
