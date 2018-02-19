
#include <blink001.h>

#include <winkyFace.h>

#include <superHappyFace.h>

//#include <straightFace.h>

#include <sadFace.h>

#include <errorFace.h>

#include <happyFace.h>

#include <LedControl.h>

int incomingByte = 0;

int DIN = 12;
int CS = 11;
int CLK = 10;

int i = 0;
boolean isActive = false;
int selection = 0;
/*
   false = down
   true = up
*/

boolean direction = false;
LedControl lc = LedControl(DIN, CLK, CS, 2);
blink001 blink1 = blink001();
errorFace error = errorFace();
sadFace sad = sadFace();
//straightFace straight = straightFace();
superHappyFace superHappy = superHappyFace();
winkyFace winky = winkyFace();

void setup() {
  // put your setup code here, to run once:
  lc.shutdown(0, false);
  lc.setIntensity(0, 0.1);

  lc.shutdown(1, false);
  lc.setIntensity(1, 0.1);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:



  if (isActive == false) {
    if (Serial.available()) {

      selection = Serial.read() - '0';
    }
  }

  switch (selection) {
    case 0:
      error.display(lc, i, direction);
      isActive = true;
      break;

    case 1:
      sad.display(lc, i, direction);
      isActive = true;
      break;

    case 2:
      blink1.display(lc, i, direction);
      isActive = true;
      break;

    case 3:
      superHappy.display(lc, i, direction);
      isActive = true;
      break;

    case 4:
      blink1.display(lc, i, direction);
      isActive = true;
      break;
  }



  checkIterator();
}

void checkIterator() {
  if (i < 8) {
    i++;

  } else {

    i = 0;
    direction = !direction;

    if (direction == false) {
      delay(1000);
      isActive = false;
      selection = 0;
    } else {
      delay(1000);

    }
  }

}



