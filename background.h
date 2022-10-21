#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED
#include "includes.h"
typedef struct
{

	    SDL_Surface *backgroundi;
	    SDL_Rect camera;
	    SDL_Rect pos;
}background;

void initialiser_backround (background *b,int x);
void afficher_background (SDL_Surface *screen,background *b);
#endif // BACKGROUND_H_INCLUDED
