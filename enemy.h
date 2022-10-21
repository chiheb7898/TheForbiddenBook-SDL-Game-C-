#ifndef enemy_H_INCLUDED
#define enemy_H_INCLUDED
#include "includes.h"



typedef struct enemie
	{

	SDL_Surface *enemie;
	SDL_Rect rect,pos;
	SDL_Rect rects[35];
	int frame;
	int direction;
	}enemie;
void init_enemy(enemie *e,int x,int y);

#endif // DS_H_INCLUDED
