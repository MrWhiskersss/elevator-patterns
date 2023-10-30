#ifndef DOOR_OPEN
#define DOOR_OPEN

class Elevator;

#include "DoorI.hpp"

class DoorOpen : public DoorI {
	public:
		DoorOpen(Elevator* elevator);
		void openDoors();
		void closeDoors();
};

#endif
