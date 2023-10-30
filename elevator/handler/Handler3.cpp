#include "../elevator/Elevator.hpp"
#include "Handler3.hpp"

Handler3::Handler3(Elevator* elevator) : HandlerI(elevator) {}

void Handler3::handle(int button) {
	if (button == 3)
		elevator->button3();
	else
		nextHandler->handle(button);
}
