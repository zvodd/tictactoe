//==============================================================================
#include "CApp.h"

//==============================================================================
bool CApp::OnInit() {
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {

		return false;
    }

    if((Surf_Display = SDL_SetVideoMode(600, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {

	   return false;
    }

    if((Surf_Grid = CSurface::OnLoad("./gfx/Grid.bmp")) == NULL) {

    return false;
    }

    if((Surf_X = CSurface::OnLoad("./gfx/X.bmp")) == NULL) {

	return false;
    }

    if((Surf_O = CSurface::OnLoad("./gfx/O.bmp")) == NULL) {

	return false;
    }
	
	CSurface::Transparent(Surf_X, 255, 0, 255);
    CSurface::Transparent(Surf_O, 255, 0, 255);
	
	Reset();

    return true;
}

//==============================================================================
