#pragma once
#ifndef COMPONENT_H
#define COMPONENT_H
class Component
{
public:
	Component();
	~Component();
	virtual void Update() = 0;
};

#endif