/*

SAMD21E18A(MattairTech MT21E(rev A))




*/



#include <SPI.h>
#include <LoRa.h>
//#define Serial SERIAL_PORT_USBVIRTUAL
#define Serial SerialUSB
int counter = 0;
const int ledPin =  LED_BUILTIN;// the number of the LED pin
int ledState = LOW;             // ledState used to set the LED

// set pin for SAMD21E18A
//setPins(int ss = LORA_DEFAULT_SS_PIN, int reset = LORA_DEFAULT_RESET_PIN, int dio0 = LORA_DEFAULT_DIO0_PIN);
# define LORA_SS_PIN 23
# define LORA_RESET_PIN 4
# define LORA_DIO0_PIN 11
# define LORA_DIO1_PIN 10
# define LORA_DIO2_PIN  7


void setup() {
  Serial.begin(57600);
 //while (!Serial){};
 pinMode (ledPin, OUTPUT);
  LoRa.setPins(LORA_SS_PIN, LORA_RESET_PIN, LORA_DIO0_PIN);
  Serial.println("LoRa Sender");

  if (!LoRa.begin(868E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

void loop() {
  // Serial.println("GET=DATETIME");
  Serial.print("Sending packet: ");
  Serial.println(counter);
   // send packet
  LoRa.beginPacket();
 // LoRa.print("GET=DATETIME");
  LoRa.print("counter ");
  LoRa.print(counter);
  LoRa.endPacket();

  counter++;

    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  

  delay(2000);
}
