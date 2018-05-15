#include "EscenasManager.h"
#include "Menu.h"
#include "Juego.h"
using namespace Ogre;
enum QueryFlags {
	MY_QUERY_IGNORE = 1 << 1,
	MY_QUERY_INTERACT = 1 << 0
};
EscenasManager::EscenasManager()
{
	juegoB = true;
	menuB = false;

	if (menuB){
		menu = new Menu(this);
		juego = nullptr;
	}
	else if (juegoB){
		juego = new Juego(this);
		menu = nullptr;
	}
}

bool EscenasManager::run(){
	if (juegoB)
		juego->run();
	else if (menuB)
		menu->run();
	return true;
}

void EscenasManager::MenuToGame(){
	menuB = false;
	juegoB = true;
	delete menu;
	juego = new Juego(this);
	run();
}
void EscenasManager::GameToMenu(){
	menuB = true;
	juegoB = false;
	delete juego;
	menu = new Menu(this);
	run();
}
EscenasManager::~EscenasManager()
{
	if (menuB)
		delete menu;
	else if (juegoB)
		delete juego;
}
