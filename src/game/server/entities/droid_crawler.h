#ifndef GAME_SERVER_ENTITIES_DROID_CRAWLER_H
#define GAME_SERVER_ENTITIES_DROID_CRAWLER_H

#include <game/server/entity.h>
#include "droid.h"

const int CrawlerPhysSize = 40;

class CCrawler : public CDroid
{
public:
	CCrawler(CGameWorld *pGameWorld, vec2 Pos);

	virtual void Reset();
	virtual void Tick();
	virtual void TickPaused();

	virtual void TakeDamage(vec2 Force, int Dmg, int From, vec2 Pos, int Type = DAMAGETYPE_NORMAL);

private:
	bool FindTarget();
	bool Target();
	void Fire();
	
	vec2 m_MoveTarget;
	float m_AngleTimer;
};

#endif
