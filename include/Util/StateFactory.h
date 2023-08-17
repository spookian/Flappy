#ifndef FLAP_UTIL_STATEFACT_H
#define FLAP_UTIL_STATEFACT_H

#include <Hero.h>

// vtable = 80771ee0
class util::StateFactory 
{
	public:
	StateFactory(hero::StateBase* ptr);
	virtual ~StateFactory();
	virtual hero::StateBase* create();
	
	hero::StateBase* curState;
	hero::Hero* parent;
	
};

/*
* StateFactory::create()
* 	this + 0x00 = vtable
* 	this + 0x04 = state pointer
*	this + 0x08 = hero pointer
*/
#endif