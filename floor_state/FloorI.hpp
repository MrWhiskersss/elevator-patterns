#ifndef FLOORI
#define FLOORI

class Elevator;

class FloorI {
	protected:
		Elevator* elevator;

	public:
		FloorI(Elevator* elevator);
		virtual ~FloorI();
		virtual void button1();
		virtual void button2();
		virtual void button3();
};

#endif
