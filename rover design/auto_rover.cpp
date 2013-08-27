/ The complete program for the rover control using the arduino uno board
#include <Servo.h>
Servo knightservo; // create servo object to control a servo
//define pins
int servopin = 9;
int distpin = 1;
int motorpin = 6;
int sensepin = distpin;
void setup()
{
knightservo.attach(servopin); // attaches the servo on pin 9 to the servo object
pinMode (motorpin, OUTPUT);
Serial.begin(9600);
}

void loop()
{
for(int i=0;i<=255;i++)
{
analogWrite(motorpin, i);
}
Serial.println(analogRead(sensepin));
delay(500);
int dist =analogRead(distpin);
dist = constrain(dist,50,450);
int pos= map(dist,50,450,0,180);
knightservo.write(pos); // sets the servo position according to the scaled value
// waits for the servo to get there
}
