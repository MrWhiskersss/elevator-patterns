#include "../elevator/Elevator.hpp"
#include "FloorI.hpp"

FloorI::FloorI(Elevator* elevator) : elevator(elevator) {}

FloorI::~FloorI() {
	elevator = nullptr;
}

void FloorI::button1() {}

void FloorI::button2() {}

void FloorI::button3() {}
