#ifndef MANA_H_INCLUDED
#define MANA_H_INCLUDED

typedef struct  mana
{
	SDL_Surface *tab[40];
	SDL_Rect pos;
	int frame;
	int exist;
}mana;
void init_mana(mana *m,int x, int y);
void animer_mana(mana *m);
void afficher_mana(SDL_Surface *screen,mana m,background b);

#endif // MANA_H_INCLUDED
