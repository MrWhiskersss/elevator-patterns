#include "../elevator/Elevator.hpp"
#include "Handler1.hpp"

Handler1::Handler1(Elevator* elevator) : HandlerI(elevator) {}

void Handler1::handle(int button) {
	if (button == 1)
		elevator->button1();
	else
		nextHandler->handle(button);
}
