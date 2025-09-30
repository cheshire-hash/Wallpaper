#include "Room.h"
#include "Wallpaper.h"
#include <iostream>

int Room::count = 0;
int Room::countWithCeeling = 0;

Room::Room() : name(nullptr), roomsize(0), ceeling(false) { count++; }

Room::Room(const char* n, int s, bool c) : roomsize(s), ceeling(c)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	roomsize = s;
	ceeling = c;
	count++;
	countWithCeeling += c ? 1 : 0;
}

Room::Room(const Room& obj)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	roomsize = obj.roomsize;
	ceeling = obj.ceeling;
	count++;
	countWithCeeling += ceeling ? 1 : 0;
}

Room::~Room()
{
	delete[] name;
	count--;
	countWithCeeling -= ceeling ? 1 : 0;
}

char* Room::GetName()
{
	return name;
}

int Room::GetRoomsize()
{
	return roomsize;
}

bool Room::GetCeeling()
{
	return false;
}

void Room::SetName(const char* n)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Room::SetRoomsize(int s)
{
	roomsize = s;
}

void Room::SetCeeling(bool c)
{
	ceeling = c;
}

int Room::GetCount()
{
	return count;
}

int Room::GetCountWithCeeling()
{
	return countWithCeeling;
}

int Room::NeededWallpaperForRoom()
{
	if (roomsize % wallpaper->GetRollsize() == 0)
	{
		return roomsize / wallpaper->GetRollsize() + 1;
	}
	else return roomsize / wallpaper->GetRollsize();
}

int Room::CostWallsForRoom()
{
	return NeededWallpaperForRoom() * wallpaper->GetPrice();
}

