#include "flame.h"
#include "background.h"
void init_flame(flame *f,int x, int y)
{
	int i;
	char chaine[20];
	for (i=0;i<33;i++)
    {
        sprintf(chaine,"flame/%d.png",i);
        f->tab[i]=IMG_Load(chaine);
    }
	f->pos.x=x;
	f->pos.y=y;
	f->frame=0;
}
/********************************************************************************************************/
/********************************************************************************************************/
void animer_flame(flame *f)
{
	if(f->frame==32)
		f->frame=0;
	else
		f->frame++;
}

/********************************************************************************************************/
void afficher_flame(SDL_Surface *screen,flame f,background b)
{
    SDL_Rect poscoin={f.pos.x-b.camera.x,f.pos.y};
        SDL_BlitSurface(f.tab[f.frame],NULL,screen,&poscoin);
}
/********************************************************************************************************/
