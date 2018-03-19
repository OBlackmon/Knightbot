#include "straightFace.h"


straightFace::straightFace(){

}


void straightFace::display(LedControl lc){

	sweepAnim(lc);
	displayPupil(lc);
}


void straightFace::sweepAnim(LedControl lc){
  
  if(direction == false){
    /*
     * If down, then light up all preceding rows
    */
    lc.setRow(0, row, 255);
	lc.setRow(1, row, 255);
    delay(25);
    
  }else{

    /*
     * If up, the turn off all rows as the lid moves up
    */
    
    lc.setRow(0, row, 0);
	lc.setRow(1, row, 0);
    delay(25); 
  }
  
}

void straightFace::displayPupil(LedControl lc, int iterator, bool direction){

	int row = currentRow(iterator, direction);
  
  //Pupil rows
  int upperPupil = 3;
  int lowerPupil = 4;
  //Value to turn on row
  int onValue = 24;
  int offValue = 0;

  if(row == upperPupil || row == lowerPupil){

    lc.setRow(0,row, 255);
    lc.setRow(1, row, 255);
    
  }else if(row < upperPupil || row < lowerPupil){

    lc.setRow(0, upperPupil, onValue);
    lc.setRow(0, lowerPupil, onValue);
    
    lc.setRow(1, upperPupil, onValue);
    lc.setRow(1, lowerPupil, onValue);
    
  }
}
