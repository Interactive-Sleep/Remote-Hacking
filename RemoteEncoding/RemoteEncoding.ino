// Tutorial: https://www.circuitbasics.com/arduino-ir-remote-receiver-tutorial/
// and https://littlebirdelectronics.com.au/guides/5/infrared-transmitter-with-arduino

#include <IRremote.h>

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;
const int PIN_10 = 10;
const int PIN_11 = 11;


void setup(){
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(PIN_10, OUTPUT);
  pinMode(PIN_11, OUTPUT);
}

void loop(){
    if (irrecv.decode(&results)){

        switch(results.value){
          // Once remote is decoded we can add cases in here
        }

        irrecv.resume(); 
    }
}

