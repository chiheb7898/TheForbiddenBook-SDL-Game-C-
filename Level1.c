#include "includes.h"

void levelone()
{
    SDL_Event event;
    SDL_Init(SDL_INIT_VIDEO);
    /***************************/
    SDL_Surface* screen=NULL;
    screen=SDL_SetVideoMode(1080,720,32,SDL_HWSURFACE);
    /***************************/
    /******************************/
    SDL_Surface *sky=NULL;
    sky=IMG_Load("background/sky.png");
    SDL_Rect possky;
    possky.x=0;
    possky.y=0;
    SDL_Surface *tree=NULL;
    tree=IMG_Load("background/tree.png");
    SDL_Rect postree;
    postree.x=0;
    postree.y=0;
    background b;
    initialiser_backround(&b,0);
    /******************************/
    coin c1,c2,c3,c4,c5;
    init_coin(&c1,500,500);
    init_coin(&c2,400,550);
    init_coin(&c3,600,450);
    /********************************/
    /***************************/
    enemie e;
    init_enemy(&e,200,500);
    /***************************/
    hpp h;
    mana m;
    init_hpp(&h,800,400);
    init_mana(&m,900,400);
    flame f,f1,f3,f4;
    init_flame(&f,200,400);
    init_flame(&f1,1000,250);
    init_flame(&f3,2000,400);
    init_flame(&f4,3000,400);
    /***************************/
    perso p;
    init_perso(&p);
    /***************************/
    int quit=1;
    SDL_EnableKeyRepeat(10,10);
    while (quit)
    {
        while(SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
                quit=0;
            case SDL_KEYDOWN:
                switch(event.key.keysym.sym)
                {
                case SDLK_RIGHT:

                    scroll(event,&b.camera);
                    postree.x+=3;
                    possky.x+=1;
                    annimer_persoright(&p);
                    break;
                case SDLK_LEFT:
                    scroll(event,&b.camera);
                    if(postree.x>=0)
                        postree.x-=3;
                    postree.x-=1;
                    break;
                }
            }
        }

animation_hold (&e);
        /***************************/
        animer_flame(&f);
        animer_flame(&f1);
        animer_flame(&f3);
        animer_flame(&f4);
        /***************************/
        animer_coin(&c1);
        animer_coin(&c2);
        animer_coin(&c3);
        /***************************/
        animer_hpp(&h);
        animer_mana(&m);
        /***************************/
        SDL_BlitSurface(sky,&possky,screen,NULL);
        SDL_BlitSurface(tree,&postree,screen,NULL);
        /***************************/
        afficher_flame(screen,f,b);
        afficher_flame(screen,f1,b);
        afficher_flame(screen,f3,b);
        afficher_flame(screen,f4,b);
        /***************************/
        afficher_background(screen,&b);
        /***************************/
        afficher_coin(screen,c1,b);
        afficher_coin(screen,c2,b);
        afficher_coin(screen,c3,b);
        /***************************/
        afficher_hpp(screen,h,b);
        afficher_mana(screen,m,b);
        /***************************/
        /********************************/
       //afficher_enemy(&e,screen);
       afficher_perso(&p,screen);

        SDL_Flip(screen);
    }
    SDL_FreeSurface(screen);
    return 0;
}
