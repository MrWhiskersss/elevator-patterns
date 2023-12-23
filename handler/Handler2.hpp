#ifndef HANDLER2
#define HANDLER2

class Elevator;

#include "HandlerI.hpp"

class Handler2 : public HandlerI {
	public:
		Handler2(Elevator* elevator);
		void handle(int button);
};

#endif
