/*
Replace all instances of "Head" with what you want to call the class
*/

#include "Head.h"

/*
lc is the object that controls and displays the light on each matrix
direction is a boolean that is false when down and true when up
*/


/*
Constructor method 

---DO NOT TOUCH----
*/
Head::Head(){

}

/*
You need at least one method that is called within the main loop of the Arduino file. For this example "display()" is called in the main loop
and manipulates the Ledcontrol object
			---DO NOT EDIT CONTENTS----
*/


void Head::turnRight(Servo horiz){
	horiz.write(90);
	delay(500);
	horiz.write(180);
	delay(500);
	horiz.write(90);
	delay(500);
}

void Head::turnLeft(Servo horiz){
	
	horiz.write(90);
	delay(500);
	horiz.write(0);
	delay(500);
	horiz.write(90);
	delay(500);
}

/*
Replace all instances of "Head" with your desired class name
*/
#ifndef Head_h
#define	Head_h


#include <expression.h>

class boilderplate : public expression {
	
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
