/* Write an Arduino program that defines a function named isEven which takes an
 * integer as a parameter and returns true if the number is even, and false if
 * it's odd. In the loop function, read an integer from the Serial Monitor, call
 * the isEven function, and print "Even" or "Odd" based on the result. */

bool isEven(int num);

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter an integer:");

  while (Serial.available() == 0);

  int number = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  if (isEven(number)) {
    Serial.println("Even");
  } else {
    Serial.println("Odd");
  }
}

bool isEven(int num) {
  return (num % 2 == 0);
}