#include <Servo.h>

Servo mojeServo;
int potencjometr = A0;
int wartosc = 0;
int kat = 0;

void setup() {
    mojeServo.attach(9);
}

void loop() {
    wartosc = analogRead(potencjometr);
    kat = map(wartosc, 0, 1023, 0, 180);
    mojeServo.write(kat);
}
