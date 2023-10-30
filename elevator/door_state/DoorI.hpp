#ifndef DOORI
#define DOORI

class Elevator;

class DoorI {
	protected:
		Elevator* elevator;

	public:
		DoorI(Elevator* elevator);
		virtual ~DoorI();
		virtual void openDoors();
		virtual void closeDoors();
};

#endif
