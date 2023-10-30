#include <iostream>
#include "DoorOpen.hpp"
#include "../elevator/Elevator.hpp"

DoorOpen::DoorOpen(Elevator* elevator) : DoorI(elevator) {}

void DoorOpen::openDoors() {
	//doors are alread open!
}

void DoorOpen::closeDoors() {
	elevator->setDoor(elevator->getDoorClosed());
	std::cout << "Doors closing\n";
}
