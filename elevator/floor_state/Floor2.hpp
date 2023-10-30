#ifndef FLOOR2
#define FLOOR2

class Elevator;

#include "FloorI.hpp"

class Floor2 : public FloorI {
	public:
		Floor2(Elevator* elevator);
		void button1();
		void button2();
		void button3();
};

#endif
