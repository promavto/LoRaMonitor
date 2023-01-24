#include <SPI.h>
#include <LoRa.h>
#include <Wire.h>



#define Serial SERIAL_PORT_USBVIRTUAL   // Подключаем USB порт в качестве COM порта
//const int ledPin =  LED_BUILTIN;// the number of the LED pin
const int ledPin = 28;// the number of the LED pin
// Variables will change :
int ledState = LOW;             // ledState used to set the LED

// set pin for SAMD21E18A
//setPins(int ss = LORA_DEFAULT_SS_PIN, int reset = LORA_DEFAULT_RESET_PIN, int dio0 = LORA_DEFAULT_DIO0_PIN);
# define LORA_SS_PIN 23
# define LORA_RESET_PIN 4
# define LORA_DIO0_PIN 5

byte count_freg = 1;

int s[40];

void setup() {
  Serial.begin(115200);
  delay(2000);
  //Wire.begin();
  //while (!Serial);                     // Ожидаем включение СОМ порта, иначе информация будет выводиться сразу
  pinMode (ledPin, OUTPUT);
  //  pinMode (ledPin10, OUTPUT);
  LoRa.setPins(LORA_SS_PIN, LORA_RESET_PIN, LORA_DIO0_PIN);

  Serial.println("LoRa Receiver");
  if (!LoRa.begin(868000000)) 
  //if (!LoRa.begin(868100000)) 
  //if (!LoRa.begin(868300000))
  //if (!LoRa.begin( 868500000))
  //if (!LoRa.begin(869525000))
  {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

void loop() {
  // try to parse packet

    //switch (count_freg) 
    //{

    //case 1:
    //    LoRa.setFrequency(868100000);
    //    break;
    //case 2:
    //    LoRa.setFrequency(868300000);
    //    break;
    //case 3:
    //    LoRa.setFrequency(868500000);
    //    break;
    //case 4:
    //    LoRa.setFrequency(868000000);
    //    break;
    //case 5:
    //    LoRa.setFrequency(869525000);
    //    break;
    //default:
    //    break;
    //    // выполняется, если не выбрана ни одна альтернатива
    //    // default необязателен
    //}



  int packetSize = LoRa.parsePacket();

  if (packetSize) {
    Serial.print("packetSize '");
    Serial.println(packetSize);
    // received a packet
    Serial.print("Received packet '");
    // read packet
    int i=0;
    while (LoRa.available()) 
    {
     s[i] = LoRa.read();
     //Serial.print((char)LoRa.read());
    }
  for(int x=0; i<packetSize;i++)
  {
       Serial.print(s[i],HEX);
      // s[i]=0;
  }

    // print RSSI of packet
    Serial.print("' with RSSI ");
    Serial.println(LoRa.packetRssi());
    if (ledState == LOW)
    {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
   Serial.flush();
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }

  /*count_freg++;
  if (count_freg > 5)
  {
      count_freg = 1;
  }*/
  delay(1);
}
