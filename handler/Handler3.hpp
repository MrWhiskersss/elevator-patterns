#ifndef HANDLER3
#define HANDLER3

class Elevator;

#include "HandlerI.hpp"

class Handler3 : public HandlerI {
	public:
		Handler3(Elevator* elevator);
		void handle(int button);
};

#endif
