
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

int selection = 0;
/*
   false = down
   true = up
*/

LedControl lc = LedControl(DIN, CLK, CS, 2);
blink001 blink1 = blink001();

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

      selection = Serial.read() - '0';
   }

  switch (selection) {
    case 0:
      blink1.display(lc);
      break;

    case 1:
     
      break;

    case 2:
      
      break;

    case 3:
      
      break;

    case 4:
      
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



