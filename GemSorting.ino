#include <Servo.h>

#define S0 2
#define S1 3
#define S2 4
#define S3 5
#define sensorOut 6

Servo topServo;
Servo bottomServo;

int frequency = 0;
int color = 0;

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);

  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);

  topServo.attach(7);
  bottomServo.attach(8);

  Serial.begin(9600);
}

void loop() {
  topServo.write(115);
  delay(1000);

  for (int i = 115; i > 65; i--) {
    topServo.write(i);
    delay(2);
  }

  delay(1000);

  color = readColor();
  delay(10);

  switch (color) {
    case 1:
      bottomServo.write(75);
      break;

    case 2:
      bottomServo.write(100);
      break;

    case 3:
      bottomServo.write(125);
      break;

    case 4:
      bottomServo.write(150);
      break;

    case 5:
      bottomServo.write(175);
      break;

    case 6:
      bottomServo.write(0);
      break;

    case 0:
      break;
  }

  delay(1000);

  for (int i = 65; i > 29; i--) {
    topServo.write(i);
    delay(2);
  }

  delay(200);

  for (int i = 29; i < 115; i++) {
    topServo.write(i);
    delay(2);
  }

  color = 0;
}

int readColor() {

  // Read Red
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);

  frequency = pulseIn(sensorOut, LOW);
  int R = frequency;

  Serial.print("R= ");
  Serial.print(R);
  Serial.print(" ");

  delay(50);

  // Read Green
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);

  frequency = pulseIn(sensorOut, LOW);
  int G = frequency;

  Serial.print("G= ");
  Serial.print(G);
  Serial.print(" ");

  delay(50);

  // Read Blue
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);

  frequency = pulseIn(sensorOut, LOW);
  int B = frequency;

  Serial.print("B= ");
  Serial.print(B);
  Serial.println();

  delay(50);

  if (R < 60 && R > 32 && G < 65 && G > 40) {
    color = 1;
  }

  if (G < 66 && G > 43 && B < 56 && B > 35) {
    color = 2;
  }

  if (R < 54 && R > 45 && G < 64 && G > 55) {
    color = 3;
  }

  if (R < 53 && R > 44 && G < 61 && G > 45) {
    color = 4;
  }

  if (R < 53 && R > 46 && G < 65 && G > 55) {
    color = 5;
  }

  if (G < 66 && G > 57 && B < 54 && B > 45) {
    color = 6;
  }

  return color;
}