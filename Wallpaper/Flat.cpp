#include "Flat.h"
#include <iostream>
#include "Room.h";
using namespace std;

int Flat::countroom = 0;

Flat::Flat() : list(nullptr) { countroom++; }

Flat::Flat(Room& list)
{
	list = new Room[numbers];
	countroom++;
}

Flat::Flat(const Flat& obj)
{
	list = new Room[countroom];  
	for (int i = 0; i < countroom; i++)
	{
		list[i] = obj.list[i]; 
	}
	obj.countroom = obj.countroom;
	countroom++;
}

Flat::~Flat()
{
	delete[] list;
	countroom--;	
}

int Flat::CountTotalRooms()
{
	int total = 0;
	for (int i = 0; i < countroom; i++)
	{
		total += list[i].NeededWallpaperForRoom();
	}
	return total;
}

int Flat::TotalCost()
{
	int total = 0;
	for (int i = 0; i < countroom; i++)
	{
		total += list[i].CostWallsForRoom();
	}
	return total;
}

void Flat::Print()
{
	cout << "Flat has " << countroom << " rooms:\n";
	for (int i = 0; i < countroom; i++)
	{
		cout << "Room #" << (i + 1) << ":\n";
		list[i].Print(); 
		cout << endl;
	}
	cout << "Total wallpaper rolls needed: " << CountTotalRooms() << "endl";
	cout << "Total wallpaper cost: " << TotalCost() << endl;
	
}

