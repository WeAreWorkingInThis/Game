#pragma once
#include "InputComponent.h"
#include "Entidad.h"
#include <OgreRenderWindow.h>
#include "RigidBody_c.h"
#include "Render_c.h"
#include "Juego.h"
#include "StatsPJ_c.h"
class PlayerController_c :
	public InputComponent
{
public:
	PlayerController_c(Entidad* ent, InputComponent * input, Juego* escena, StatsPJ_c* estadisticas);
	PlayerController_c(){};
	void Update();
	~PlayerController_c();
	void chocasCon(int i, Entidad* ent);//0 para cuando no es nada, 1 npc
private:
	bool keyPressed(const OIS::KeyEvent& keyP);
	bool keyReleased(const OIS::KeyEvent& keyP);
	bool mouseMoved(const OIS::MouseEvent& me);
	bool mousePressed(const OIS::MouseEvent& me, OIS::MouseButtonID id);
	bool mouseReleased(const OIS::MouseEvent& me, OIS::MouseButtonID id);
	InputComponent* inputcomp_;
	Entidad* entidad;
	float auxX, auxY, auxZ;
	bool mas, istimetoStop;
	RigidBody_c* rb;
	Render_c * rc;
	Juego* escena;
	StatsPJ_c* estadisticas;
	Ogre::SceneNode* node;

	int chocoCon;
	Entidad* entColision;
};

