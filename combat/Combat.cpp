#include "Combat.hpp"

Combat::Combat(){
    this->head = new enemyList;
}

void Combat::head_push(Enemy e){
	p_enemyList temp = new enemyList;
	temp->enemy = e;
	temp->next = this->head;
    this->head = temp;
	
}

void Combat::enemy_obj_assign(Room *room){

	this->head = new enemyList;

	for(int y = 0; y < 20; y++){
		for(int x = 0; x < 20; x++){
			if(room->currentRoom[y][x] == 3){
				Enemy e(room, 3, 3, 0, x, y, 100);
				head_push(e);
			}
		}

	}

}

void Combat::rand_mv(p_enemyList p, Room *room){

	bool check = false;


	while(!check){

		int m = rand()%4;

		switch (m){
		case 0:
			check = p->enemy.mv_left(room);	
			break;
		case 1:
			check = p->enemy.mv_right(room);
			break;
		case 2:
			check = p->enemy.mv_up(room);
			break;
		case 3:
			check = p->enemy.mv_down(room);
			break;
		default:
			break;
		}
	}
}

void Combat::enemy_movement(Room *room){

	p_enemyList temp = this->head;
	while(temp->next!=nullptr){
		if(!(temp->enemy.isDead)){
			rand_mv(temp, room);
		}
		temp = temp->next;
	}


}
/* Devo ancora decidere come michia farla sta uccisione. Forse faccio tutto in funzione
void Combat::enemy_kill(Room *room, Player *player){
	if(room->currentRoom[this->y][this->x-1] == 3) room->currentRoom[this->y][this->x-1] = 0;
	else if(room->currentRoom[this->y][this->x+1] == 3) room->currentRoom[this->y][this->x+1] = 0;
	else if(room->currentRoom[this->y+1][this->x] == 3) room->currentRoom[this->y+1][this->x] = 0;
	else if(room->currentRoom[this->y-1][this->x] == 3) room->currentRoom[this->y-1][this->x] = 0;

*/