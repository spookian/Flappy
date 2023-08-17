namespace scn::step
{
	class Component;
	class ContextHeroIndivi;
	
	namespace chara // no omnikirby, not that chara
	{
		class HitPoint;
		class DamageInfo;
		class Model; // enemy->model is confirmed to be one; has a variable named "shake" that is only 2 words long
	}
	
	namespace hero // players
	{
		class Hero;
		class InactiveHero;
		
		class AbilityBase;
		class StateBase;
		class Water;
		class RunChecker; // 0x0 is parent hero, 0x4-0x10 are unknown, 0x14 and 0x15 are booleans; due to padding, the object is 24 bytes long
		class Flash;
	}
	
	namespace enemy // enemies
	{
		class CustomBase; // vtable spotted!!!
		/*
			bool onInit()			- 8036e510;
			bool onHitPointIsZero()	- 8036e514;
			bool onVacuumReceive()	- 8036e518;
			bool onVacuumResist()	- 8036e51c;
			bool onDamaged()		- 8036e520
		*/
	}
	
	namespace weapon // projectiles
	{
	}
	
	namespace boss // boss
	{
	}
}