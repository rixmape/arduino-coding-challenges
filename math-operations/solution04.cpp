/* Create an Arduino program that reads an integer from the Serial Monitor,
 * applies a series of compound assignment operations (+=, -=, *=, /=), and
 * prints the intermediate results after each operation to the Serial Monitor.
 * Use predefined constants for the operations: add 10, subtract 5, multiply by
 * 3, and divide by 2. */

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter an integer:");

  while (Serial.available() == 0);

  int value = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  Serial.print("Initial value: ");
  Serial.println(value);

  value += 10;
  Serial.print("After adding 10: ");
  Serial.println(value);

  value -= 5;
  Serial.print("After subtracting 5: ");
  Serial.println(value);

  value *= 3;
  Serial.print("After multiplying by 3: ");
  Serial.println(value);

  value /= 2;
  Serial.print("After dividing by 2: ");
  Serial.println(value);
}
