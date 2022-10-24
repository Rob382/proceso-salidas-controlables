 /*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(115200);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A2, INPUT);
  pinMode(A4, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue1 = digitalRead(A2);
  if (sensorValue1 == LOW){
  // print out the value you read:
  Serial.print("analog 3 = ");
  Serial.println(sensorValue1);

  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  }
  else{
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
//  int sensorValue2 = digitalRead(A4);
//  if (sensorValue2 == LOW){
//  // print out the value you read:
//  Serial.print("analog 4 = ");
//  Serial.println(sensorValue2);
//  digitalWrite(12, HIGH);
//  }
//  else{
//    digitalWrite(12, LOW);
//  }
  delay(100);        // delay in between reads for stability
}
