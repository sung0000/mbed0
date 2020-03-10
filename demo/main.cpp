#include "mbed.h"


DigitalOut redLED(LED_RED);

DigitalOut greenLED(LED_GREEN);


int Ledr(DigitalOut& ledpin);
int Ledg(DigitalOut& ledpin);

int main()

{

   redLED = 1;

   greenLED = 1;

   while (true) {

       Ledr(redLED);

       Ledg(greenLED);

   }

}