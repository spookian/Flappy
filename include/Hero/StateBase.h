#ifndef FLAP_HERO_STATEBASE_H
#define FLAP_HERO_STATEBASE_H

#include <Step.h>

using namespace scn::step::hero;
class StateBase
{
	public:
	StateBase(Hero* hro);
	virtual ~StateBase();
	
	virtual void procAnim();
	virtual void procMove();
	virtual void procConstraint();
	virtual void procFixPos();
	virtual bool procObjCollReact();
	virtual void procEnd();
	
	Hero* parent;
};
//807B68B0 - vtable location
#endif