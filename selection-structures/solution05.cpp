/* Design an Arduino program that reads two integers from the Serial Monitor and
 * checks if both numbers are positive using the && operator. Additionally,
 * check if at least one of the numbers is positive using the || operator.
 * Finally, print the results of these checks to the Serial Monitor. */

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter two integers:");

  while (Serial.available() < 2);

  int num1 = Serial.parseInt();
  int num2 = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  bool bothPositive = (num1 > 0) && (num2 > 0);
  bool atLeastOnePositive = (num1 > 0) || (num2 > 0);

  Serial.print("Both positive: ");
  Serial.println(bothPositive ? "true" : "false");

  Serial.print("At least one positive: ");
  Serial.println(atLeastOnePositive ? "true" : "false");
}
