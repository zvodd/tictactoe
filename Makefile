# Makefile to build the SDL tests

srcdir  = .

CC      = g++
EXE	= .exe
CFLAGS  = -g -O2 -I/mingw/include/SDL -D_GNU_SOURCE=1 -Dmain=SDL_main -DHAVE_OPENGL
LIBS	=  -L/mingw/lib -lmingw32 -lSDLmain -lSDL -mwindows

TARGETS =  CApp$(EXE)
all: $(TARGETS)


CApp$(EXE): $(srcdir)/CApp.h $(srcdir)/CApp.cpp $(srcdir)/CApp_OnCleanup.cpp $(srcdir)/CApp_OnEvent.cpp $(srcdir)/CApp_OnInit.cpp $(srcdir)/CApp_OnLoop.cpp $(srcdir)/CApp_OnRender.cpp $(srcdir)/CSurface.h $(srcdir)/CSurface.cpp $(srcdir)/CEvent.h $(srcdir)/CEvent.cpp
	$(CC) -o $@ $? $(CFLAGS) $(LIBS)




clean:
	rm -f $(TARGETS)

distclean: clean
	rm -f Makefile
	rm -f config.status config.cache config.log
	rm -rf $(srcdir)/autom4te*
