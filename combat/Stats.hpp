#ifndef STATS_HPP
#define STATS_HPP

#include "../entities/Player.hpp"
#include "../entities/Enemy.hpp"
#include "../map/Memory.hpp"

struct activation_record{
	bool active;
	int treshold;
};

class Stats{
	public:
	activation_record globalPlayerStats[5];
	activation_record globalEnemyStats[5];
	activation_record globalArtifactStats[5];
	
	private:
	int globalEnemyHP;
	int globalEnemyDmg;

	public:
	Stats(int playerTresholds[5], int enemyTresholds[5], int artifactTresholds[5], int enemyHPDefault = 3, int enemyDmgDefault = 1);
	~Stats();

	void check_all_stats(Player *player, Memory *mapmem);

};



#endif