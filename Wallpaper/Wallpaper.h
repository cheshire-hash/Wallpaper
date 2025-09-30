#pragma once
class Wallpaper
{
	char* name;
	int rollsize;
	int price;
public:
	Wallpaper();
	Wallpaper(const char* n, int s, int p);
	Wallpaper(const Wallpaper& obj);
	~Wallpaper();
	char* GetName();
	int GetRollsize();
	int GetPrice();
	void SetName(const char* n);
	void SetRollsize(int s);
	void SetPrice(int p);
};

