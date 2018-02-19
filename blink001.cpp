#include "blink001.h"

	int pupil[8] = {0, 0, 24, 60, 60, 24, 0, 0};

/*
lc is the object that controls and displays the light on each matrix
direction is a boolean that is false when down and true when up
*/


/*
Constructor method ---DO NOT TOUCH----
*/

blink001::blink001(){

}

/*
This method is called by the Arduino in the main file. 
Make sure the text before the "::" matches the name of the file
			---DO NOT EDIT CONTENTS----
*/

void blink001::display(LedControl lc, int iterator, bool direction){
	
	sweepAnim(lc, iterator, direction);
	
}

/*
sweepAnim() is the function that houses the instructions for the eye animation 
Make sure the text before the "::" matches the name of the file
*/
void blink001::sweepAnim(LedControl lc, int iterator, bool direction){

	lc.setColumn(0, 2, pupil[2]);
	lc.setColumn(0, 3, pupil[3]);
	lc.setColumn(0, 4, pupil[3]);
	lc.setColumn(0, 5, pupil[2]);
	
	lc.setColumn(1, 2, pupil[2]);
	lc.setColumn(1, 3, pupil[3]);
	lc.setColumn(1, 4, pupil[3]);
	lc.setColumn(1, 5, pupil[2]);
  
}

/*
displayPupil() is the function that houses the static display for each eye
Make sure the text before the "::" matches the name of the file
*/

