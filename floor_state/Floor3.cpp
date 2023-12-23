#include <iostream>
#include "../elevator/Elevator.hpp"
#include "Floor3.hpp"

Floor3::Floor3(Elevator* elevator) : FloorI(elevator) {}

void Floor3::button1() {
	elevator->closeDoors();

	std::cout << "Going down...\n";
	elevator->setFloor(elevator->getFloor1());

	std::cout << "*ding* The elevator arrives at floor 1\n";
	elevator->openDoors();
}

void Floor3::button2() {
	elevator->closeDoors();
	
	std::cout << "Going down...\n";
	elevator->setFloor(elevator->getFloor2());

	std::cout << "*ding* The elevator arrives at floor 2\n";
	elevator->openDoors();
}

void Floor3::button3() {
	elevator->closeDoors();
	
	std::cout << "Nothing happens...\n";
}
