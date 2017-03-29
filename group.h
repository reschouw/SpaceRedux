//group.h
//Header file for group class
//Allows multiple entities to be grouped together and updated/drawn at once.

#pragma once

#ifndef GROUP_H
#define GROUP_H

#include"entity.h"

#include<forward_list>

class Group {

	//Constructors/Destructors
	Group();
	~Group();

	//Add entity to group
	void grpAdd(Entity* Ent);
	//Remove entity from group
	void grpRemove(Entity* Ent);

private:
	std::forward_list<Entity*> GrpList;
};

#endif