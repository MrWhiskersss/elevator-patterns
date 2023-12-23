#ifndef FLOOR1
#define FLOOR1

class Elevator;

#include "FloorI.hpp"

class Floor1 : public FloorI {
	public:
		Floor1(Elevator* elevator);
		void button1();
		void button2();
		void button3();
};

#endif
