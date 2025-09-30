#pragma once
#include "Room.h";
class Flat
{
	Room* list;
	static int countroom;
public:
	Flat();
	Flat(int n);
	Flat(const Flat& obj);
	~Flat();
	int CountTotalRooms();
	int TotalCost();
};

