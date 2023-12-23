#include <iostream>
#include "../elevator/Elevator.hpp"
#include "Floor2.hpp"

Floor2::Floor2(Elevator* elevator) : FloorI(elevator) {}

void Floor2::button1() {
	elevator->closeDoors();

	std::cout << "Going down...\n";
	elevator->setFloor(elevator->getFloor1());

	std::cout << "*ding* The elevator arrives at floor 1\n";
	elevator->openDoors();
}

void Floor2::button2() {
	elevator->closeDoors();

	std::cout << "Nothing happens...\n";
}

void Floor2::button3() {
	elevator->closeDoors();

	std::cout << "Going up...\n";
	elevator->setFloor(elevator->getFloor3());
	
	std::cout << "*ding* The elevator arrives at floor 3\n";
	elevator->openDoors();
}
