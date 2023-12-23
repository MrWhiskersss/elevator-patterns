#include <iostream>
#include "DoorClosed.hpp"
#include "../elevator/Elevator.hpp"

DoorClosed::DoorClosed(Elevator* elevator) : DoorI(elevator) {}

void DoorClosed::openDoors() {
	elevator->setDoor(elevator->getDoorOpen());
	std::cout << "Doors opening\n";
}

void DoorClosed::closeDoors() {
	//doors are already closed!
}
