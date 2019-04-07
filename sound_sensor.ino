int ledPin=13;
int sensorPin=7;
boolean val =0;
//int buzzerPin = 11;

void setup(){


  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin (9600);
 // pinMode(buzzerPin, OUTPUT);                               // This will set the pin 11 as output
 /* void beep(unsigned char delayms) {                       // Created a function for beep

  analogWrite(buzzerPin, 20);                                      // This will set pin 11 to high

  delay(delayms);                                                             // Giving a delay

  analogWrite(buzzerPin ,0);                                        // This will set pin 11 to LOW

  delay(delayms);                                                             // Giving a delay

}
  beep(50);                                                                          // This will make a beep sound Beep

  beep(50);                                                                         

  delay(1000);                                                                     //Adding a delay of 1 sec.

}
*/  

void loop (){
  val =digitalRead(sensorPin);
  Serial.println (val);
  // when the sensor detects a signal above the threshold value, LED flashes
  if (val==HIGH) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
  // beep(50);                                                                          // This will make a beep sound after every 500 milliseconds

 // delay(1000);                                                                     // Adding a delay of one second.
}

