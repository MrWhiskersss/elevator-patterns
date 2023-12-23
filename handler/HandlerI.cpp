#include "../elevator/Elevator.hpp"
#include "HandlerI.hpp"

HandlerI::HandlerI(Elevator* elevator) : elevator(elevator) {}

HandlerI::~HandlerI() {
	elevator = nullptr;
	nextHandler = nullptr;
}

void HandlerI::handle(int button) {}

void HandlerI::setNextHandler(HandlerI* newNextHandler) {
	nextHandler = newNextHandler;
}
