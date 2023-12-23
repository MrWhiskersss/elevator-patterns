#ifndef FLOOR3
#define FLOOR3

class Elevator;

#include "FloorI.hpp"

class Floor3 : public FloorI {
	public:
		Floor3(Elevator* elevator);
		void button1();
		void button2();
		void button3();
};

#endif
