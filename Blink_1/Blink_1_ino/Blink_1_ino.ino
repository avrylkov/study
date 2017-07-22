

/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
  iss_01
  iss_02
 */

/*
   Remote_01 
 */

 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led13 = 13;
int sec = 2000;


void blink_3(int h_sec, int l_sec) {
  // 1
  digitalWrite(led13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(h_sec);  // wait for a second
  digitalWrite(led13, LOW);    // turn the LED off by making the voltage LOW
  delay(l_sec);               // wait for a second
  // 2
  digitalWrite(led13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(h_sec);  // wait for a second
  digitalWrite(led13, LOW);    // turn the LED off by making the voltage LOW
  delay(l_sec);               // wait for a second
  // 3
  digitalWrite(led13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(h_sec);  // wait for a second
  digitalWrite(led13, LOW);    // turn the LED off by making the voltage LOW
  delay(l_sec);               // wait for a second  
}

// это ин  e setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led13, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  // 3 точки ===============================
  blink_3(200,200);
  //3 тирэ ========================================
  blink_3(1000,200);
  // 3 точки ===============================  
  blink_3(200,200);
  // пауза
  delay(3000);               // wait for a second

}
