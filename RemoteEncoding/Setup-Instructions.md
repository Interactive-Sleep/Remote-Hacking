# Setup Instructions

## Tutorial

[IR Emitter Tutorial](https://littlebirdelectronics.com.au/guides/5/infrared-transmitter-with-arduino)

Required libraries are in resources > IR-Lib2-master

To add them to your IDE perform same steps as described in setup-instructions for the RemoteDecoding

## Protocol

We're going to have to use the RemoteProtocol.ino program to get the infrared protocol of the bed. Common ones are, Sony, Matsushita, NEC, and RC5.

The protocol is how the infrared wave is convereted to binary, I am not 100% sure what kind of modulation is used, however, I am pretty sure data is encoded using FM (Frequency modulation). FM is just using 2 distinct frequencies to encode 0 and 1 (see below), AM is using 2 different amplitudes. 

The seperate protocols all use the same modulation technique and frequency bands, however, they use different time intervals between frequency changes.

![Difference Between AM And FM - Introduction | What is Amplitude Modulation](https://cdn1.byjus.com/wp-content/uploads/2020/07/Difference-Between-AM-And-FM1.png)



