const int outputPin = 13;
int potPin = 0;
int sensorVal = 0;
int prevVal = 0;
String inputString = "";

void setup()
{
  pinMode(outputPin, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  //pot
  sensorVal = analogRead(potPin);
  if(prevVal != sensorVal) {
  Serial.print('B');
  Serial.print(sensorVal);
  Serial.print('E');
  prevVal = sensorVal;  
  }
  delay(100);
  
  // arduino reads Serial
  if (Serial.available() > 0) {
    int incomingByte = Serial.read();
 
    if (incomingByte == 1) { // 0x01 = char 1
      digitalWrite(outputPin, 1);
    } else if (incomingByte == 0) { // 0x00 = char 0
      digitalWrite(outputPin, 0);
    }
  }
}
