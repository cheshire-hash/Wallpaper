#include "Flat.h"
#include <iostream>

Flat::Flat() : list(nullptr) { countroom++; }

Flat::Flat(int numbers)
{
	list = new Room[numbers];
	countroom++;
}

Flat::Flat(const Flat& obj)
{
	if (list != nullptr)
	{
		delete[] list;
	}
	list = new Room[sizeof(obj.list) / sizeof(obj.list[0])];
	for (int i = 0; i < sizeof(obj.list) / sizeof(obj.list[0]); i++)
	{
		list[i] = obj.list[i];
	}
	countroom++;
}

Flat::~Flat()
{
	delete[] list;
	countroom--;	
}

