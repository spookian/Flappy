#ifndef FLAP_HERO_ABILITYBASE_H
#define FLAP_HERO_ABILITYBASE_H

#include <Step.h>

using namespace scn::step::hero;
class AbilityBase // 12 bytes long
{
	public:
	AbilityBase(scn::step::Component& cmp, Hero& hro); // 804cfed0
	virtual ~AbilityBase();
	
	virtual void setup();
	virtual bool tryToChangeStateOnCarry();
	virtual bool tryToChangeStateOnInterval();
	virtual bool tryToChangeStateOnDamage();
	virtual bool tryToChangeState();
	
	virtual void onStateEndCleanUp();
	virtual void onGetEventItem();
	virtual void onGimmickReactChangeState();
	virtual void onStartClearDanceExternal();
	virtual void onEnterWarpLowper();
	virtual void onShowHero();
	virtual void onHideHero();
	virtual void onDead();
	virtual void onCaptured();
	virtual void onVacuumed();
	virtual void onStartDemo();
	virtual void onEnterDoor();
	
	virtual void procAnim();
	virtual void procMove();
	virtual void procObjCollReact();
	
	virtual bool isDepleted();
	
	// first word is vtable pointer
	scn::step::Component* comp;
	Hero* parent;
};

#endif