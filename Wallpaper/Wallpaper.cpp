#include "Wallpaper.h"
using namespace std;
#include<iostream>

Wallpaper::Wallpaper() : name(nullptr), rollsize(0), price(0)
{
}

Wallpaper::Wallpaper(const char* n, int s, int p) : rollsize(s), price(p)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

Wallpaper::Wallpaper(const Wallpaper& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	rollsize = obj.rollsize;
	price = obj.price;
}

Wallpaper::~Wallpaper()
{
	delete[] name;
}

char* Wallpaper::GetName()
{
	return name;
}

int Wallpaper::GetRollsize()
{
	return rollsize;
}

int Wallpaper::GetPrice()
{
	return price;
}
