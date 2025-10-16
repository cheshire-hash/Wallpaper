#include "Flat.h"
#include <iostream>
#include "Room.h";
using namespace std;

int Flat::countflat = 0;
int Flat::countroomforflat = Room::GetCount();

Flat::Flat() : list(nullptr) { countflat++; }

Flat::Flat(int n)
{
	countroomforflat = n;
	list = new Room[countroomforflat];
}

Flat::Flat(const Flat& obj)
{
	if (countroomforflat > 0)
	{
		list = new Room[countroomforflat];
		for (int i = 0; i < countroomforflat; i++)
		{
			list[i] = obj.list[i];
		}
	}
	else
	{
		list = nullptr;
	}
	countflat++;  
}

Flat::~Flat()
{
	delete[] list;
	countflat--;	
}

int Flat::CountTotalRooms()
{
	int total = 0;
	for (int i = 0; i < countroomforflat; i++)
	{
		total += list[i].NeededWallpaperForRoom();
	}
	return total;
}

int Flat::TotalCost()
{
	int total = 0;
	for (int i = 0; i < countroomforflat; i++)
	{
		total += list[i].CostWallsForRoom();
	}
	return total;
}

void Flat::Print()
{
	cout << "Flat has " << countroomforflat << " rooms:\n";
	for (int i = 0; i < countroomforflat; i++)
	{
		cout << "Room #" << (i + 1) << ":\n";
		list[i].Print(); 
		cout << endl;
	}
	cout << "Total wallpaper rolls needed: " << CountTotalRooms() << "endl";
	cout << "Total wallpaper cost: " << TotalCost() << endl;
	
}

void Flat::SetRoom(int index, const Room& room)
{
	list[index].~Room();
	new (&list[index]) Room(room);
}

