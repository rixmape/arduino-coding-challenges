/* Create an Arduino program that reads a floating-point number from the Serial
 * Monitor and uses built-in math functions to calculate and print the square
 * root, sine, and cosine of the number. Display each result with three decimal
 * places. */

#include <math.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter a floating-point number:");

  while (Serial.available() == 0);

  float number = Serial.parseFloat();

  while (Serial.available() > 0) {
    Serial.read();
  }

  float sqrtResult = sqrt(number);
  float sinResult = sin(number);
  float cosResult = cos(number);

  Serial.print("Square Root: ");
  Serial.println(sqrtResult, 3);

  Serial.print("Sine: ");
  Serial.println(sinResult, 3);

  Serial.print("Cosine: ");
  Serial.println(cosResult, 3);
}
