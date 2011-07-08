//==============================================================================
// TicTacToe Demo
//==============================================================================
#ifndef _CAPP_H_
    #define _CAPP_H_
#include <SDL/SDL.h>

#include "CEvent.h"
#include "CSurface.h"

class CApp : public CEvent {
    private:
		
        bool            Running;

        SDL_Surface*    Surf_Display;
	private:
        SDL_Surface*    Surf_Grid;

		SDL_Surface*	Surf_X;
		SDL_Surface*	Surf_O;

	private:
		int Grid[9];
		
		int CurrentPlayer;
		
		enum {
		GRID_TYPE_NONE = 0,
		GRID_TYPE_X,
		GRID_TYPE_O
		};
		
		
		
    public:
        CApp();
        int OnExecute();

		void SetCell(int ID, int Type);
		
		
    public:
        bool OnInit();

        void OnEvent(SDL_Event* Event);
		
		void OnLButtonDown(int mX, int mY); //mouse interaction
		
		void OnKeyDown(SDLKey sym, SDLMod mod, Uint16 unicode);
		
		void OnExit();

        void OnLoop();

        void OnRender();

        void OnCleanup();
	
	public:
		void Reset();
};

#endif
