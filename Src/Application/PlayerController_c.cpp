#include "PlayerController_c.h"
#include <iostream>

PlayerController_c::PlayerController_c(Entidad * ent, InputComponent * input)
{
	inputcomp_ = input;
	entidad = ent;
	inputcomp_->addKeyListener(this, "teclado");
	inputcomp_->addMouseListener(this, "raton");
}

bool PlayerController_c::keyPressed(const OIS::KeyEvent& keyP)
{
	switch (keyP.key)
	{
	case OIS::KC_ESCAPE:
		//mShutDown = true;
		break;

	case OIS::KC_1:
		/*mCamera->getParentSceneNode()->detachObject(mCamera);
		mCamNode = mSceneMgr->getSceneNode("CamNode1");
		mCamNode->attachObject(mCamera);*/
		break;

	case OIS::KC_2:
		/*mCamera->getParentSceneNode()->detachObject(mCamera);
		mCamNode = mSceneMgr->getSceneNode("CamNode2");
		mCamNode->attachObject(mCamera);*/
		break;

	case OIS::KC_UP:
	case OIS::KC_W:
		entidad->setPox(1);
		break;

	case OIS::KC_DOWN:
	case OIS::KC_S:
		/*mDirection.z = mMove;*/
		break;

	case OIS::KC_LEFT:
	case OIS::KC_A:
		/*mDirection.x = -mMove;*/
		break;

	case OIS::KC_RIGHT:
	case OIS::KC_D:
		/*mDirection.x = mMove;*/
		break;

	case OIS::KC_PGDOWN:
	case OIS::KC_E:
		/*mDirection.y = -mMove;*/
		break;

	case OIS::KC_PGUP:
	case OIS::KC_Q:
		/*mDirection.y = mMove;*/
		break;

	default:
		break;
	}

	return true;
}
	


bool PlayerController_c::keyReleased(const OIS::KeyEvent& keyP){
	switch (keyP.key)
	{
	case OIS::KC_UP:
	case OIS::KC_W:
		entidad->setPox(0);
		break;

	case OIS::KC_DOWN:
	case OIS::KC_S:
		/*mDirection.z = 0;*/
		break;

	case OIS::KC_LEFT:
	case OIS::KC_A:
		/*mDirection.x = 0;*/
		break;

	case OIS::KC_RIGHT:
	case OIS::KC_D:
		/*mDirection.x = 0;*/
		break;

	case OIS::KC_PGDOWN:
	case OIS::KC_E:
		/*mDirection.y = 0;*/
		break;

	case OIS::KC_PGUP:
	case OIS::KC_Q:
		/*mDirection.y = 0;*/
		break;

	default:
		break;
	}

	return true;

}

bool PlayerController_c::mouseMoved(const OIS::MouseEvent& me)
{
	if (me.state.buttonDown(OIS::MB_Right))
	{
		/*mCamNode->yaw(Ogre::Degree(-mRotate * me.state.X.rel), Ogre::Node::TS_WORLD);
		mCamNode->pitch(Ogre::Degree(-mRotate * me.state.Y.rel), Ogre::Node::TS_LOCAL);*/
	}

	return true;
}

bool PlayerController_c::mousePressed(const OIS::MouseEvent& me, OIS::MouseButtonID id)
{
	/*Ogre::Light* light = mSceneMgr->getLight("Light1");*/

	switch (id)
	{
	case OIS::MB_Left:
		/*light->setVisible(!light->isVisible());*/
		break;
	default:
		break;
	}

	return true;
}

bool PlayerController_c::mouseReleased(const OIS::MouseEvent& me, OIS::MouseButtonID id)
{
	return true;
}


void PlayerController_c::Update(){
	
	

}

PlayerController_c::~PlayerController_c()
{
	inputcomp_->removeKeyListener(this);
	inputcomp_->removeMouseListener(this);
}
