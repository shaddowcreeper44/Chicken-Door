#include <Bridge.h>
#include <BridgeClient.h>
#include <BridgeServer.h>
#include <BridgeSSLClient.h>
#include <BridgeUdp.h>
#include <Console.h>
#include <FileIO.h>
#include <HttpClient.h>
#include <Mailbox.h>
#include <Process.h>
#include <YunClient.h>
#include <YunServer.h>



const int controlPin1 = 0;
const int controlPin2 = 1;
const int enablePin = 3;
const int sensorPin = 4;
//int sensorValue;
int motorEnabled;
int motorDirection;

void setup() {
  // put your setup code here, to run once:
pinMode(controlPin1, OUTPUT);
pinMode(controlPin2, OUTPUT);
pinMode(enablePin, OUTPUT);
pinMode(sensorPin, INPUT);
digitalWrite(enablePin, LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(sensorPin);
Serial.print("Sensor Value: ");
Serial.println(sensorValue);
  if (sensorValue < 500);
{(sensorValue = 100);
}
digitalWrite(enablePin, HIGH);
digitalWrite(controlPin1, HIGH);
digitalWrite(controlPin2, LOW);
//delay(1000);
  if (sensorValue > 500);
{(sensorValue = 200);
}
  digitalWrite(enablePin, HIGH);
  digitalWrite(controlPin2, HIGH);
  digitalWrite(controlPin1, LOW);
//delay(1000);
}

//serialprint is working, as is sensorpin
//does not change direction when values change
//continious cycle-need to stop until a change occurs
//cut-off switch before input to bridge.
