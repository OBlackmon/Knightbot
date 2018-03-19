#include "trans.h"

	int pupil[8] = {255, 255, 255, 255, 255, 255, 255, 255};

/*
lc is the object that controls and displays the light on each matrix
direction is a boolean that is false when down and true when up
*/


/*
Constructor method ---DO NOT TOUCH----
*/

trans::trans(){

}

/*
This method is called by the Arduino in the main file. 
Make sure the text before the "::" matches the name of the file
			---DO NOT EDIT CONTENTS----
*/

void trans::display(LedControl lc){
	
	sweepAnim(lc);
	
}

/*
sweepAnim() is the function that houses the instructions for the eye animation 
Make sure the text before the "::" matches the name of the file
*/
void trans::sweepAnim(LedControl lc){

	for(int i = 7; i >= 0; i--){

        lc.setColumn(0, i, pupil[i]);
        lc.setColumn(1, i, pupil[i]);
        delay(200);
    }
    
delay(1000);

    for(int i = 0; i <= 7; i++){

        lc.setColumn(0, i, 0);
        lc.setColumn(1, i, 0);
        delay(200);

    }
  
}

/*
displayPupil() is the function that houses the static display for each eye
Make sure the text before the "::" matches the name of the file
*/

