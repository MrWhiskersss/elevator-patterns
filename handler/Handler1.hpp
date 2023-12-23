#ifndef HANDLER1
#define HANDLER1

class Elevator;

#include "HandlerI.hpp"

class Handler1 : public HandlerI {
	public:
		Handler1(Elevator* elevator);
		void handle(int button);
};

#endif
