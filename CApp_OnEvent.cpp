//==============================================================================
#include "CApp.h"

//==============================================================================
void CApp::OnEvent(SDL_Event* Event) {
    CEvent::OnEvent(Event);
}

void CApp::OnLButtonDown(int mX, int mY) {
    int ID  = mX / 200;
    ID = ID + ((mY / 200) * 3);
    if(Grid[ID] != GRID_TYPE_NONE) {
        return;
    }

    if(CurrentPlayer == 0) {
        SetCell(ID, GRID_TYPE_X);
        CurrentPlayer = 1;
    }else{
        SetCell(ID, GRID_TYPE_O);
        CurrentPlayer = 0;
    }
}

void CApp::OnKeyDown(SDLKey sym, SDLMod mod, Uint16 unicode){
switch (sym) 
{
case SDLK_r: 
Reset();
break;
}

}

void CApp::OnExit() {
    Running = false;
}
 

//==============================================================================
