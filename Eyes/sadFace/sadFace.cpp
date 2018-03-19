#include "sadFace.h"
/*
lc is the object that controls and displays the light on each matrix
direction is a boolean that is false when down and true when up
*/

/*
Constructor method ---DO NOT TOUCH----
*/
sadFace::sadFace(){

}

/*
This method is called by the Arduino in the main file. 
Make sure the text before the "::" matches the name of the file
			---DO NOT EDIT CONTENTS----
*/

void sadFace::display(LedControl lc){

	displayPupil(lc);
	sweepAnim(lc);
	
}

/*
sweepAnim() is the function that houses the instructions for the eye animation 
Make sure the text before the "::" matches the name of the file
*/

void sadFace::sweepAnim(LedControl lc){

	//Logic used to determine what to make the row number
  int row = currentRow(iterator, direction);

  

  
}

/*
displayPupil() is the function that houses the static display for each eye
Make sure the text before the "::" matches the name of the file
*/

void sadFace::displayPupil(LedControl lc){
  
  //First Eye
  lc.setRow(0, 0, 255);
  lc.setRow(0, 1, 255);
  lc.setRow(0, 2, 24);
  lc.setRow(0, 3, 24);
  lc.setRow(0, 4, 24);
  lc.setRow(0, 5, 24);
  lc.setRow(0, 6, 24);
  lc.setRow(0, 7, 24);
  
  
  
  //Second Eye
  lc.setRow(1, 0, 255);
  lc.setRow(1, 1, 255);
  lc.setRow(1, 2, 24);
  lc.setRow(1, 3, 24);
  lc.setRow(1, 4, 24);
  lc.setRow(1, 5, 24);
  lc.setRow(1, 6, 24);
  lc.setRow(1, 7, 24);
  
}
