#ifndef FLAP_HERO_MANAGER_H
#define FLAP_HERO_MANAGER_H

#include <GenericPointer.h>
#include <Step.h>
#include <Hel.h>

typedef hel::common::MutableArray<scn::step::Hero*, 4> HeroList;
typedef hel::common::MutableArray<scn::step::InactiveHero*, 4> InactiveList;
typedef hel::common::MutableArray<scn::step::enemy::Enemy*, 20> EnemyList;
typedef hel::common::MutableArray<scn::step::boss::Boss*, 4> BossList;

using namespace scn::step::hero;
class Manager //1180 bytes
{
	public:
	Manager(scn::step::Component& root);
	
	HeroList& getHeroList()
	{
		GenericPointer<Manager> gp = GenericPointer(this);
		gp += 156;
		return gp.getPointer<HeroList>();
	}
	
	InactiveList& getInactiveList()
	{
		GenericPointer<Manager> gp = GenericPointer(this);
		gp += 176;
		return gp.getPointer<InactiveList>();
	}
	
	void createHeroAndStart(unsigned int cur_num, const Vector2& f_pos, const Vector2& s_pos, bool unk_00, const ContextHeroIndivi& individHero, unsigned int unk_01);
	void removeHero(unsigned int heroNum);
}; 



#endif