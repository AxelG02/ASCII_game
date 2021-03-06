#include "Combat.hpp"

Combat::Combat() {
	this->head = nullptr;
}

void Combat::head_push(Enemy e){
	p_enemyList temp = new enemyList;
	temp->enemy = e;
	temp->next = this->head;
    this->head = temp;
	
}

void Combat::enemy_obj_assign(Room *room){

	this->head = nullptr;

	for(int y = 0; y < 20; y++){
		for(int x = 0; x < 20; x++){
			if(room->currentRoom[y][x] == 3){
				Enemy e(room, 3, 1, false, x, y);
				head_push(e);
			}
		}
	}
}

void Combat::rand_mv(p_enemyList p_enemy, Room *room){

	bool check = false;

	while(!check){

		int m = rand()%4;

		switch (m){
		case 0:
			check = p_enemy->enemy.mv_left(room);	
			break;
		case 1:
			check = p_enemy->enemy.mv_right(room);
			break;
		case 2:
			check = p_enemy->enemy.mv_up(room);
			break;
		case 3:
			check = p_enemy->enemy.mv_down(room);
			break;
		default:
			break;
		}
	}
}

void Combat::enemy_movement(Room *room){

	p_enemyList temp = this->head;
	while(temp!=nullptr){
		if(!(temp->enemy.isDead)){
			rand_mv(temp, room);
		}
		temp = temp->next;
	}
}

void Combat::enemy_destroy(int x, int y) {
    p_enemyList tmp = this->head, prec = nullptr;
    p_enemyList to_destroy;
    
    while (tmp != nullptr) {
        if (tmp->enemy.x == x && tmp->enemy.y == y) {
            to_destroy = tmp;
        
            if (prec == nullptr) {
                this->head = this->head->next;
            } else {
                prec->next = tmp->next;
            }
            
            tmp = tmp->next;
            delete(to_destroy);
        } else {
            prec = tmp;
            tmp = tmp->next;
        }
    }
}

void Combat::enemy_kill(Room *room, Player *player) {
	int x = player->x, y = player->y;

	if(room->currentRoom[player->y][player->x-1] == 3) {x--;}
	else if(room->currentRoom[player->y][player->x+1] == 3) {x++;}
	else if(room->currentRoom[player->y-1][player->x] == 3) {y--;}
	else if(room->currentRoom[player->y+1][player->x] == 3) {y++;}

	p_enemyList temp = this->head;

	while(temp != nullptr) {
		if(x == temp->enemy.x && y == temp->enemy.y) {
			temp->enemy.dmg_calc(player->dmg);
		}

		if(temp->enemy.isDead) {
			player->score += 1;
			room->currentRoom[y][x] = 0;
			enemy_destroy(x, y);
		}

		temp = temp->next;
	}
}