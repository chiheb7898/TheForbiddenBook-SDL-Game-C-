#ifndef FLAME_H_INCLUDED
#define FLAME_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "includes.h"

typedef struct flame
{
	SDL_Surface *tab[33];
	SDL_Rect pos;
	int frame;
}flame;
void init_flame(flame *f,int x, int y);
void animer_flame(flame *f);
void afficher_flame(SDL_Surface *screen,flame f,background b);


#endif // FLAME_H_INCLUDED
