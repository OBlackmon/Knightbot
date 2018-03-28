<<<<<<< HEAD
/*
Replace all instances of "Head" with your desired class name
*/
#ifndef Head_h
#define	Head_h


class Head {
	
	/*
	Inside of public, define methods that will be used in the main Arduino file. For instance, display() is the method calledi in the main loop.
	It takes arguments of LedControl, iterator, and direction. You can edit how the method will work inside of the cpp file.
	*/
	public:
	
		Head();
		
		void turnRight(Servo horiz);
		
		void turnLeft(Servo horiz);
	/*
	Inside of private, define methods that will only be used inside of the cpp file. 
	*/	
	private:
	
};

#endif
=======
/*
Replace all instances of "Head" with your desired class name
*/
#ifndef Head_h
#define	Head_h

#include <Servo.h>
#include <Arduino.h>
class Head {
	/*
	Inside of public, define methods that will be used in the main Arduino file. For instance, display() is the method calledi in the main loop.
	It takes arguments of LedControl, iterator, and direction. You can edit how the method will work inside of the cpp file.
	*/
	public:
	
		Head();
		
		void turnRight(Servo horiz);
		
		void turnLeft(Servo horiz);
		
		void nod(Servo vertic);
	/*
	Inside of private, define methods that will only be used inside of the cpp file. 
	*/	
	private:
	
};

#endif
>>>>>>> cb757f08fd7b73f3f718534cb5ef1c25e61a5439
