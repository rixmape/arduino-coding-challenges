/* Write an Arduino program that reads two integers from the Serial Monitor and
 * uses the conditional operator (?:) to determine and print the larger of the
 * two numbers. The program should print "Larger number: x" where x is the
 * larger of the two numbers. */

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

  int larger = (num1 > num2) ? num1 : num2;
  Serial.print("Larger number: ");
  Serial.println(larger);
}
