#pragma once
class Room
{
	char* name;
	int roomsize;
	bool ceeling;
public:
	Room();
	Room(const char* n, int s, bool c);
	Room(const Room& obj);
	~Room();
	char* GetName();
	int GetRoomsize();
	bool GetCeeling();
	void SetName(const char* n);
	void SetRoomsize(int s);
	void SetCeeling(bool c);
};

