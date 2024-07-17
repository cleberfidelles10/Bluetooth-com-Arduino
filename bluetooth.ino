#include <SoftwareSerial.h>
#define led 7
SoftwareSerial bluetooth(7,6); // rx e tx

int dadosBluetooth = 0;
void setup() {
  // put your setup code here, to run once:
  bluetooth.begin(9600);
  bluetooth.print("conectando");
  bluetooth.print("conectando");
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(bluetooth.available()){
    dadosBluetooth = bluetooth.read();
  }

  if(dadosBluetooth == "a"){
    digitalWrite(led, true);
  }
  if(dadosBluetooth == "b"){
    digitalWrite(led, false);
  }

}
