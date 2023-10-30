#include "../elevator/Elevator.hpp"
#include "Handler2.hpp"

Handler2::Handler2(Elevator* elevator) : HandlerI(elevator) {}

void Handler2::handle(int button) {
	if (button == 2)
		elevator->button2();
	else
		nextHandler->handle(button);
}
