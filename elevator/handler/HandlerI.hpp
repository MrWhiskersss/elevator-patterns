#ifndef HANDLERI
#define HANDLERI

class Elevator;

class HandlerI {
	protected:
		Elevator* elevator;
		HandlerI* nextHandler;

	public:
		HandlerI(Elevator* elevator);
		virtual ~HandlerI();
		virtual void handle(int button);
		virtual void setNextHandler(HandlerI* nextHandler);
};

#endif
