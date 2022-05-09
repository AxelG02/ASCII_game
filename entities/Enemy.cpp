#include "Enemy.hpp"

Enemy::Enemy(Room *room, int hp, int dmg, bool isDead, int x, int y){
	this->hp = hp;
	this->dmg = dmg;
	this->isDead = isDead;
	this->x = x;
	this->y = y;
	room->currentRoom[this->y][this->x] = 3;	//spawna il nemico
	this->attackMode = false;
}

Enemy::Enemy(){

}

void Enemy::render(Room *room, bool spawn){
	if(spawn) room->currentRoom[this->y][this->x] = 3;
	else room->currentRoom[this->y][this->x] = 0;
}

bool Enemy::mv_left(Room *room){
	if (room->currentRoom[this->y][this->x-1] != 2 && room->currentRoom[this->y][this->x-1] != 6){
		Enemy::render(room, 0);
		this->x--;
		Enemy::render(room);
		return true;
	}
	else return false;
}

bool Enemy::mv_right(Room *room){
	if (room->currentRoom[this->y][this->x+1] != 2 && room->currentRoom[this->y][this->x+1] != 6){
		Enemy::render(room, 0);
		this->x++;
		Enemy::render(room);
		return true;
	}
	else return false;
}

bool Enemy::mv_up(Room *room){
	if (room->currentRoom[this->y-1][this->x] != 2 && room->currentRoom[this->y-1][this->x] != 6){
		Enemy::render(room, 0);
		this->y--;
		Enemy::render(room);
		return true;
	}
	else return false;
}

bool Enemy::mv_down(Room *room){
	if (room->currentRoom[this->y+1][this->x] != 2 && room->currentRoom[this->y+1][this->x] != 6){
		Enemy::render(room, 0);
		this->y++;
		Enemy::render(room);
		return true;
	}
	else return false;
}

void Enemy::set_attackMode_true(){
	this->attackMode = true;
}
	
void Enemy::set_attackMode_false(){
	this->attackMode = false;
}

bool Enemy::get_attackMode(){
	return this->attackMode;
}