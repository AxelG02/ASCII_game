#ifndef ROOM_HPP
#define ROOM_HPP

class Room{
	public:
	int currentRoom[20][20];

	Room(int matrix[20][20]);
	void swap_matrix(int matrix[20][20]);
};

#endif