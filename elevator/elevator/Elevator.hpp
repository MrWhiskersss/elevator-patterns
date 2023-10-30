#ifndef ELEVATOR
#define ELEVATOR

class DoorI;
class DoorOpen;
class DoorClosed;

class FloorI;
class Floor1;
class Floor2;
class Floor3;

class Elevator {
	private:
		DoorI* doorState;
		DoorOpen* doorOpen;
		DoorClosed* doorClosed;

		FloorI* floorState;
		Floor1* floor1;
		Floor2* floor2;
		Floor3* floor3;

	public:
		Elevator();
		~Elevator();

		void button1();
		void button2();
		void button3();

		void closeDoors();
		void openDoors();

		void setFloor(FloorI* floorState);
		FloorI* getFloor1();
		FloorI* getFloor2();
		FloorI* getFloor3();

		void setDoor(DoorI* doorState);
		DoorI* getDoorOpen();
		DoorI* getDoorClosed();
};

#endif
