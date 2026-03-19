#include <Arduino.h>
// Loovee @ 2015-8-26
#include <math.h>
const int B = 4275000; // B value of the thermistor
const int R0 = 100000; // R0 = 100k
const int pinTempSensor = A0; // Grove - Temperature Sensor connect to A0

void setup()
{
  Serial.begin(9600);
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  Serial.println(result);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hi!");
  delay(2000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}