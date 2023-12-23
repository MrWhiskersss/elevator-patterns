#include "elevator/Elevator.hpp"

#include "handler/HandlerI.hpp"
#include "handler/Handler1.hpp"
#include "handler/Handler2.hpp"
#include "handler/Handler3.hpp"
#include "handler/HandlerDefault.hpp"

#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "Error: please specify file input path\n";
		return -1;
	}

	std::ifstream pressed(argv[1]);
	char button;

	Elevator elevator;

	Handler1 handler1(&elevator);
	Handler2 handler2(&elevator);
	Handler3 handler3(&elevator);
	HandlerDefault handlerDefault(&elevator);

	handler1.setNextHandler(&handler2);
	handler2.setNextHandler(&handler3);
	handler3.setNextHandler(&handlerDefault);

	if (pressed.is_open()) {
		while (pressed.good()) {
			button = pressed.get();
			if (button != ' ')
				handler1.handle(button - 48);
		}

		pressed.close();
	}

	return 0;
}
