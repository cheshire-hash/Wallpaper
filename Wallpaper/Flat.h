#pragma once
#include "Room.h";
class Flat
{
	Room* list;
	static int countflat;
	static int countroomforflat;
public:
	Flat();
	Flat(int n);
	Flat(const Flat& obj);
	~Flat();
	int CountTotalRooms();
	int TotalCost();
	void Print();
	void SetRoom(int index, const Room& room);
};

