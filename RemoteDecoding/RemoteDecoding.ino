// Tutorial here: https://www.instructables.com/IR-Remote-Hacking-and-Automation/
// and https://www.circuitbasics.com/arduino-ir-remote-receiver-tutorial/

#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  // Make sure the terminal you have open is running on 9600, otherwise you will not be able to see the codes
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver 
}

void loop()
{
  if (irrecv.decode(&results))
    {
     Serial.println(results.value, HEX);
     irrecv.resume(); // Receive the next value
    }
}