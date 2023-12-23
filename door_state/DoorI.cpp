#include "DoorI.hpp"
#include "../elevator/Elevator.hpp"

DoorI::DoorI(Elevator* elevator) : elevator(elevator) {}

DoorI::~DoorI() {
	elevator = nullptr;
}

void DoorI::openDoors() {}

void DoorI::closeDoors() {}
