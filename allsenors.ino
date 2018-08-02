#include <Servo.h> 
int LED = 12; // Use the onboard Uno LED
int obstaclePin = 8;  // This is our input pin
int hasObstacle = HIGH;  // HIGH MEANS NO OBSTACLE
int sp=6;
Servo Servo1; 
int LED2 = 13; // Use the onboard Uno LED
int obstaclePin2 = 2;  // This is our input pin
int hasObstacle2 = HIGH;  // HIGH MEANS NO OBSTACLE
int sp2=5;
Servo Servo2; 

int LED3 = 4; // Use the onboard Uno LED
int obstaclePin3 = 3;  // This is our input pin
int hasObstacle3 = HIGH;  // HIGH MEANS NO OBSTACLE
int sp3=7;
Servo Servo3; 

void setup() {
  Servo1.attach(sp);
  pinMode(LED, OUTPUT);
  pinMode(obstaclePin, INPUT);
  Servo2.attach(sp2);
  pinMode(LED2, OUTPUT);
  pinMode(obstaclePin2, INPUT);
  Servo3.attach(sp3);
  pinMode(LED3, OUTPUT);
  pinMode(obstaclePin3, INPUT);
  Serial.begin(9600);  
}
void loop() {
  hasObstacle = digitalRead(obstaclePin); //Reads the output of the obstacle sensor from the 7th PIN of the Digital section of the arduino
   hasObstacle2 = digitalRead(obstaclePin2); //Reads the output of the obstacle sensor from the 7th PIN of the Digital section of the arduino
 hasObstacle3 = digitalRead(obstaclePin3);
  if (hasObstacle == HIGH) //LOW means something is ahead, so illuminates the 13th Port connected LED
  {
    digitalWrite(sp,HIGH);
    Serial.println("Stop something is ahead!!");
    digitalWrite(LED, HIGH);//Illuminates the 13th Port LED
    Servo1.write(10); 
   delay(300); 
   // Make servo go to 90 degrees 
  
   delay(300);
  }
  else
  {
    Serial.println("Path is clear");
    digitalWrite(sp,LOW);
     digitalWrite(LED, LOW);//Illuminates the 13th Port LED
    Servo1.write(60);
    delay(300);
  }

   if (hasObstacle2 == HIGH) //LOW means something is ahead, so illuminates the 13th Port connected LED
  {
    digitalWrite(sp2,HIGH);
    Serial.println("Stop something is ahead!!");
    digitalWrite(LED2, HIGH);//Illuminates the 13th Port LED
    Servo2.write(0); 
   delay(300); 
   // Make servo go to 90 degrees 
 
    delay(300);
  }
  else
  {
    Serial.println("Path is clear");
    digitalWrite(sp2,LOW);
     digitalWrite(LED2, LOW);//Illuminates the 13th Port LED
    Servo2.write(60);
    delay(300);
  }

 if (hasObstacle3 == HIGH) //LOW means something is ahead, so illuminates the 13th Port connected LED
  {
    digitalWrite(sp3,HIGH);
    Serial.println("Stop something is ahead!!");
    digitalWrite(LED3, HIGH);//Illuminates the 13th Port LED
    Servo3.write(0); 
   delay(300); 
   // Make servo go to 90 degrees 
 
    delay(300);
  }
  else
  {
    Serial.println("Path is clear");
    digitalWrite(sp3,LOW);
     digitalWrite(LED3, LOW);//Illuminates the 13th Port LED
    Servo3.write(60);
    delay(300);
  }
    delay(300);
}

