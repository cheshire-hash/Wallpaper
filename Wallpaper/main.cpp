#include <iostream>
#include "Flat.h"
#include "Wallpaper.h"
#include "Room.h"
using namespace std;
int main() {
    Wallpaper* wp1 = new Wallpaper("classic", 10, 500);
    Wallpaper* wp2 = new Wallpaper("Modern", 8, 600);  // Исправлено: 0 на 8

    // Создаем комнаты
    Room room1("Living Room", 25, true);
    Room room2("Bedroom", 15, true);
    Room room3("Kitchen", 20, false);

    // Устанавливаем обои
    room1.SetWallpaper(wp1);
    room2.SetWallpaper(wp2);
    room3.SetWallpaper(wp1);

    // Создаем квартиру с 3 комнатами
    Flat flat(3);
    flat.SetRoom(0, room1);
    flat.SetRoom(1, room2);
    flat.SetRoom(2, room3);

    // Выводим информацию
    flat.Print();
}