
// Урок 3 схема 1


/*
    iss_01
	iss_02	
	iss_03	
	iss_04
	iss_05
*/


/*
    remote_01
    remote_02
    remote_03
	master_02
*/

#include <Servo.h> 

Servo dvig;
int grad;

void sec(int gr)
{
 dvig.write(gr);
 delay(1000);  
}  

void setup() 
{ 
  dvig.attach(9);
} 

void loop() 
{
  grad=0;
  sec(grad);
  // 10
  grad = grad + 10;
  sec(grad);
  // 20
  grad = grad + 10;
  sec(grad);
  //30
  grad = grad + 10;
  sec(grad);
  //40
  grad = grad + 10;
  sec(grad);
  //50
  grad = grad + 10;
  sec(grad);
  //60
  grad = grad + 10;
  sec(grad);
  //70
  grad = grad + 10;
  sec(grad);
  //80
  grad = grad + 10;
  sec(grad);
  //90
  grad = grad + 10;
  sec(grad);
  //100
  grad = grad + 10;
  sec(grad);
  //110
  grad = grad + 10;
  sec(grad);
  //120
  grad = grad + 10;
  sec(grad);
  //130
  grad = grad + 10;
  sec(grad);
  //140
  grad = grad + 10;
  sec(grad);
  //150
  grad = grad + 10;
  sec(grad);
  //160
  grad = grad + 10;
  sec(grad);
  //170
  grad = grad + 10;
  sec(grad);  
  //180  
  grad = grad + 10;
  sec(grad);
 

} 

