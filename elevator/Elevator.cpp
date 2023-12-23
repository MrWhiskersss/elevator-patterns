#include "../door_state/DoorI.hpp"
#include "../door_state/DoorOpen.hpp"
#include "../door_state/DoorClosed.hpp"

#include "../floor_state/FloorI.hpp"
#include "../floor_state/Floor1.hpp"
#include "../floor_state/Floor2.hpp"
#include "../floor_state/Floor3.hpp"

#include "Elevator.hpp"

#include <iostream>

Elevator::Elevator() {
	doorOpen = new DoorOpen(this);
	doorClosed = new DoorClosed(this);

	floor1 = new Floor1(this);
	floor2 = new Floor2(this);
	floor3 = new Floor3(this);

	doorState = doorOpen;
	floorState = floor1;
}

Elevator::~Elevator() {
	delete doorOpen;
	delete doorClosed;

	delete floor1;
	delete floor2;
	delete floor3;

	doorOpen = nullptr;
	doorClosed = nullptr;
	
	floor1 = nullptr;
	floor2 = nullptr;
	floor3 = nullptr;

	doorState = nullptr;
	floorState = nullptr;
}

void Elevator::button1() {
	std::cout << "                            1 pressed!\n";
	floorState->button1();
}

void Elevator::button2() {
	std::cout << "                            2 pressed!\n";
	floorState->button2();
}

void Elevator::button3() {
	std::cout << "                            3 pressed!\n";
	floorState->button3();
}

void Elevator::closeDoors() {
	doorState->closeDoors();
}

void Elevator::openDoors() {
	doorState->openDoors();
}

void Elevator::setFloor(FloorI* newFloor) {
	floorState = newFloor;
}

FloorI* Elevator::getFloor1() {
	return floor1;
}

FloorI* Elevator::getFloor2() {
	return floor2;
}

FloorI* Elevator::getFloor3() {
	return floor3;
}

void Elevator::setDoor(DoorI* newDoor) {
	doorState = newDoor;
}

DoorI* Elevator::getDoorOpen() {
	return doorOpen;
}

DoorI* Elevator::getDoorClosed() {
	return doorClosed;
}
