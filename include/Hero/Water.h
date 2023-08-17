#ifndef FLAP_HERO_WATER_H
#define FLAP_HERO_WATER_H

#include <Step.h>

using namespace scn::step::hero;
class Water // 36 bytes
{
	private:
	Hero& parent;
	int padding[8] // 0x0008 is a float;
	
	public:
	Water(Hero& parent);
	
	void update();
	void chkPos() const;
	
	bool canChangeState() const;
	bool canEffect() const;
	bool chkInWater() const;
	bool isOnSurface() const;
};

#endif