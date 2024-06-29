/* Design an Arduino program that reads an integer from the Serial Monitor and
 * determines if the number is even or odd. The program should print "Even
 * number" if the number is even, and "Odd number" if the number is odd. */

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

  if (number % 2 == 0) {
    Serial.println("Even number");
  } else {
    Serial.println("Odd number");
  }
}
