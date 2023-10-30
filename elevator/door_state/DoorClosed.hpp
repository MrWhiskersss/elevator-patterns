#ifndef DOOR_CLOSED
#define DOOR_CLOSED

class Elevator;

#include "DoorI.hpp"

class DoorClosed : public DoorI {
	public:
		DoorClosed(Elevator* elevator);
		void openDoors();
		void closeDoors();
};

#endif
