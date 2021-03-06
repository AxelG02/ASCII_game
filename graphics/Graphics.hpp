#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

#include "../entities/Player.hpp"
#include "../room/Room.hpp"
#include <ncurses.h>

class MainWindow {
private:
	// caratteri per la stampa della matrice
	char wallCh;
	char playerCh;
	char enemyCh;
	
	// traduce int nel giusto carattere
	char matrix_translate(int toConvert);

public:
	// costruttore
	MainWindow(char wallch, char playerch, char enemych);
	
	// stampa la matrice
    void print_room(Room *room, Player *player, int level_id);
	
	// scambia la stanza con un'altra data come parametro
	void swap_room(Room *room);
};
#endif