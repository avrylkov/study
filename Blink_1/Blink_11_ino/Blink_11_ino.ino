

/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
  
  iss_03
  iss_04
  iss_05
  iss_06
  iss_07
  iss_08
  iss_09
  iss_10
 */

/*
  Remote_01
  Remote_02
*/

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 3;
int sec = 2000;


void blink_3(int h_sec, int l_sec) {
  // 1
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(h_sec);  // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(l_sec);               // wait for a second
  // 2
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(h_sec);  // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(l_sec);               // wait for a second
  // 3
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(h_sec);  // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(l_sec);               // wait for a second  
}

// это ин  e setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
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
