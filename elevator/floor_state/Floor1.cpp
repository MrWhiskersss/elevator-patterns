#include <iostream>
#include "../elevator/Elevator.hpp"
#include "Floor1.hpp"

Floor1::Floor1(Elevator* elevator) : FloorI(elevator) {}

void Floor1::button1() {
	elevator->closeDoors();

	std::cout << "Nothing happens...\n";
}

void Floor1::button2() {
	elevator->closeDoors();

	std::cout << "Going up...\n";
	elevator->setFloor(elevator->getFloor2());

	std::cout << "*ding* The elevator arrives at floor 2\n";
	elevator->openDoors();
}

void Floor1::button3() {
	elevator->closeDoors();

	std::cout << "Going up...\n";
	elevator->setFloor(elevator->getFloor3());

	std::cout << "*ding* The elevator arrives at floor 3\n";
	elevator->openDoors();
}
