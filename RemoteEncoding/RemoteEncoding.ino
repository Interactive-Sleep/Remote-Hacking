// Tutorial: https://learn.sparkfun.com/tutorials/ir-communication

#include <IRremote.h>
// TODO: there's a package we need to include for irsend.sendRaw(buf, len, hz);

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;


void setup(){
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop(){
    if (irrecv.decode(&results)){

        switch(results.value){
          // Once remote is decoded we can add cases in here
        }

        irrecv.resume(); 
    }
}

/**
* @param buf - the hex code
* @param len - the length of the code
* @param hz - the frequency of the wave, default to 38 kHz (commercial IR transmission frequency)
* @return 1 for error, 0 for success
*/
int sendIrSignal(unsigned int buf[], int len, int hz=38){
  // Can add whatever checks we need here
  irsend.sendRaw(buf, len, hz);
  return 0
}

int liftHead(){

}

int lowerHead(){

}

int liftFoot(){

}

int lowerFoot(){

}

int vibrate(int intensity){
  // three levels of intensity
  if (intensity == 1){

  }else if (intensity == 2){

  }else if (intensity == 3){

  }else if (intensity == 0){

  }else{
    // error
    return 1
  }
}

int turnOffVibrate(){
  vibrate(0)
}

int resetBed(){

}


