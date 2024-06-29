/* Create an Arduino program that reads 10 integers from the Serial Monitor and
 * uses a for loop to print only the positive integers. Use the continue
 * statement to skip printing any non-positive integers (zero or negative
 * numbers). */

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter 10 integers:");

  for (int i = 0; i < 10; i++) {
    while (Serial.available() == 0);
    int number = Serial.parseInt();

    while (Serial.available() > 0) {
      Serial.read();
    }

    if (number <= 0) {
      continue; // Skip to next iteration if number is not positive
    }

    Serial.println(number);
  }
}
