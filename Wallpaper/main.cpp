#include <iostream>
#include "Flat.h"
#include "Wallpaper.h"
#include "Room.h"
using namespace std;
int main() {
    // Создаём обои
    Wallpaper wp1("Classic", 10, 500);
    Wallpaper wp2("Modern", 8, 600);

    // Создаём комнаты и устанавливаем обои
    Room room1("Living Room", 25, true);
    room1.SetWallpaper(&wp1);

    Room room2("Bedroom", 15, false);
    room2.SetWallpaper(&wp2);

    Room room3("Kitchen", 20, true);
    room3.SetWallpaper(&wp1);

    // Создаём квартиру с 3 комнатами
    Flat flat(3);

    flat.SetRoom(0, room1);
    flat.SetRoom(1, room2);
    flat.SetRoom(2, room3);

    // Вывод информации по квартире
    flat.Print();
}