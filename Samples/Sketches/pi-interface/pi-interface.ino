#include <happyFace.h>

#include <errorFace.h>

#include <blink001.h>

#include <LedControl.h>

/*
  This arduino file was created to accept a specific input from a raspberry pi. The current interface involves receiving values between
  0 - 9 from a raspberry pi and responding according to the switch statement below.
*/
int incomingByte = 0;

int DIN = 12;
int CS = 11;
int CLK = 10;

int eye_selection = 0;
int head_selection = 0;
int wheel_selection = 0;
/*
   false = down
   true = up
*/

LedControl lc = LedControl(DIN, CLK, CS, 2);
blink001 blink1 = blink001();
happyFace happy = happyFace();
errorFace error = errorFace();


void setup() {
  // put your setup code here, to run once:
  lc.shutdown(0, false);
  lc.setIntensity(0, 0.1);

  lc.shutdown(1, false);
  lc.setIntensity(1, 0.1);

  Serial.begin(9600);
}

void loop() {

  //Checking to see if input is available
  if (Serial.available()) {

    eye_selection = Serial.parseInt();
    head_selection = Serial.parseInt();
    wheel_selection = Serial.parseInt();
  }

  switch (eye_selection) {
    case 0:

      break;

    case 1:
      blink1.display(lc);
      break;

    case 2:

      break;

    case 3:

      break;

    case 4:

      break;
  }

  switch (head_selection) {
    case 0:

      break;

    case 1:

      error.display(lc);
      break;

    case 2:

      break;

    case 3:

      break;

    case 4:

      break;
  }

  switch (wheel_selection) {
    case 0:

      break;

    case 1:

      happy.display(lc);
      break;

    case 2:

      break;

    case 3:

      break;

    case 4:

      break;
  }


}



