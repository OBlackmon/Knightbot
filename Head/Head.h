/*
Replace all instances of "Head" with your desired class name
*/
#ifndef Head_h
#define	Head_h


class boilderplate {
	
	/*
	Inside of public, define methods that will be used in the main Arduino file. For instance, display() is the method calledi in the main loop.
	It takes arguments of LedControl, iterator, and direction. You can edit how the method will work inside of the cpp file.
	*/
	public:
	
		boilderplate();
		
		void turnRight(Servo horiz);
		
		void turnLeft(Servo horiz);
	/*
	Inside of private, define methods that will only be used inside of the cpp file. 
	*/	
	private:
	
};

#endif
