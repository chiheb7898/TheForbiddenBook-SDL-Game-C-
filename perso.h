#define PERSO_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

typedef struct perso
{
    SDL_Surface *sprite;
    SDL_Rect rcSprite,rcSrc[5],rect;
    int frame;
}perso;

void init_perso(perso *p);
void annimer_persoright(perso *p);
void annimer_persoleft(perso *p);
void afficher_perso(perso *p,SDL_Surface *screen);
