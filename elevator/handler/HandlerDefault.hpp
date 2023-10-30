#ifndef HANDLER_DEFAULT
#define HANDLER_DEFAULT

class Elevator;

#include "HandlerI.hpp"

class HandlerDefault : public HandlerI {
	public:
		HandlerDefault(Elevator* elevator);
};

#endif
