#include <Servo.h>

Servo servo_9;

void setup()
{
  pinMode(A0, INPUT);
  servo_9.attach(9, 500, 2500);

}

void loop()
{
  servo_9.write(map(analogRead(A0), 0, 1023, 0, 180));
  delay(10);
}
