#ifndef HPPOSSION_H_INCLUDED
#define HPPOSSION_H_INCLUDED
#include "background.h"
#include "includes.h"
typedef struct  hpp
{
	SDL_Surface *tab[41];
	SDL_Rect pos;
	int frame;
	int exist;
}hpp;
void init_hpp(hpp *h,int x, int y);
void animer_hpp(hpp *h);
void afficher_hpp(SDL_Surface *screen,hpp h,background b);
#endif // HPPOSSION_H_INCLUDED
