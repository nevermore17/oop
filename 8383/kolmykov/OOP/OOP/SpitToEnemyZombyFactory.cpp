#include "SpitToEnemyZombyFactory.h"



SpitToEnemyZombyFactory::SpitToEnemyZombyFactory()
{
	type = UnitType::SPIT_TO_ENEMY_ZOMBY;
}


SpitToEnemyZombyFactory::~SpitToEnemyZombyFactory()
{
}

std::shared_ptr<Unit> SpitToEnemyZombyFactory::create(int x, int y, int level)
{
	return std::shared_ptr<Unit>(new SpitToEnemyZomby(x, y, level));
}
