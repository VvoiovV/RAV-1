#include <SoftwareSerial.h> //Virtual serial port for bluetooth 
SoftwareSerial bluetooth(12, 11); //12 RX, 11 TX
char received  = 0;


#include <Servo.h>
Servo servo;
#define pinservo 2


#include <Stepper.h>
Stepper firststepper(32, 4, 6, 7, 8);
Stepper secondstepper(32, 16, 17, 18, 19);

  #define motorpin1 3
  #define motorpin2 5
  #define motorpin3 9
  #define motorpin4 10

void setup() {
   Serial.begin(9600);
   bluetooth.begin(9600);
   serv
   o.attach(pinservo);
   
   pinMode(motorpin1, OUTPUT);
   pinMode(motorpin2, OUTPUT);
   digitalWrite(motorpin1, LOW);
   digitalWrite(motorpin2, LOW);

   pinMode(motorpin3, OUTPUT);
   pinMode(motorpin4, OUTPUT);
   digitalWrite(motorpin3, LOW);
   digitalWrite(motorpin4, LOW);
  
  servo.write(20);
    delay(1000);

}

void loop() {
  delay(10);
  
  if(bluetooth.available() > 0){ //if any sign is received 
  received  = bluetooth.read();
  Serial.print(received);
  Serial.print("\n");

  
     if(received == '1'){
      digitalWrite(motorpin1, HIGH);
      digitalWrite(motorpin2, LOW); 
      }
      if(received == 's'){
      digitalWrite(motorpin1, HIGH);
      digitalWrite(motorpin2, HIGH);
      }
       if(received == '2'){
      digitalWrite(motorpin2, HIGH);
      digitalWrite(motorpin1, LOW);
      }
      if(received == 'd'){
      digitalWrite(motorpin1, HIGH);
      digitalWrite(motorpin2, HIGH);
      }

      
       if(received == '3'){
      digitalWrite(motorpin3, HIGH);
      digitalWrite(motorpin4, LOW);
      }
      if(received == 'p'){
      digitalWrite(motorpin4, HIGH);
      digitalWrite(motorpin3, HIGH);
      }
      if(received == '4'){
      digitalWrite(motorpin4, HIGH);
      digitalWrite(motorpin3, LOW);
      }
      if(received =='c'){
      digitalWrite(motorpin4, HIGH);
      digitalWrite(motorpin3, HIGH);
      }

            
      if(received == '6'){ // SERVO OFF //
      servo.write(20);  
      }
      if(received == '7'){ // SERVO ON //
      servo.write(140);  
      }

      
      if(received == '8'){
      firststepper.setSpeed(500);
      firststepper.step(15);
      }
      if(received == '9'){
      firststepper.setSpeed(500);
      firststepper.step(-15);
      }
      if(received == 'a'){
      secondstepper.setSpeed(500);
      secondstepper.step(15);
      }
      if(received == 'b'){
      secondstepper.setSpeed(500);
      secondstepper.step(-15);  
      }     
    } 
}
