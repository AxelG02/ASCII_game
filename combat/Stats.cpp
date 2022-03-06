#include "Stats.hpp"

Stats::Stats(int playerTresholds[5], int enemyTresholds[5], int artifactTresholds[5], int enemyHPDefault, int enemyDmgDefault){
	this->globalEnemyDmg = enemyDmgDefault;
	this->globalEnemyHP = enemyHPDefault;

	for (int i = 0; i < 5; i++){
		this->globalPlayerStats[i].treshold = playerTresholds[i];
		this->globalPlayerStats[i].active = false;

		this->globalEnemyStats[i].treshold = enemyTresholds[i];
		this->globalEnemyStats[i].active = false;

		this->globalArtifactStats[i].treshold = artifactTresholds[i];
		this->globalArtifactStats[i].active = false;
	}
}

void Stats::check_all_stats(Player *player, Memory *mapmem){

	for (int i = 0; i < 5; i++){
		if (!this->globalPlayerStats[i].active){
			if(this->globalPlayerStats[i].treshold <= player->score){
				this->globalPlayerStats[i].active = true;
				player->dmg += 1;
		}

		if (!this->globalEnemyStats[i].active){
			if(this->globalEnemyStats[i].treshold <= mapmem->last->level_id){
				this->globalEnemyStats[i].active = true;
			}
		}

		if (!this->globalArtifactStats[i].active){
			if(this->globalArtifactStats[i].treshold <= player->score){
				this->globalArtifactStats[i].active = true;
			}
		}
	}
}