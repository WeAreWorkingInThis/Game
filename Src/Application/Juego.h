#ifndef JUEGO_H
#define JUEGO_H
#include "GameManager_c.h"
#include "EscenasManager.h"
class Juego : public Escenas
{
public:
	Juego(EscenasManager* escenasManager);
	virtual ~Juego();
	virtual bool run();
	virtual bool initBullet();
	void activaMision(Entidad* npc);
	void atacar(Entidad* npc);
	void killAdd(Entidad* obj);
	void muerteJugador();
private:
	void creaPan(int x, int y, int z, std::string idRender);
	void creaOgreEnemy(int x, int y, int z, std::string idRender);
	//variables vienen de escenas.h
	GameManager_c* gm;
	EscenasManager* escenasManager;
};
#endif