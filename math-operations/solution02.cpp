/* Design an Arduino program that reads three integers from the Serial Monitor
 * and calculates the value of the expression a + b * c / a - c. The program
 * should correctly apply the precedence and associativity rules to evaluate the
 * expression and print the result to the Serial Monitor. */

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter three integers:");

  while (Serial.available() == 0);

  int a = Serial.parseInt();
  int b = Serial.parseInt();
  int c = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  if (a == 0) {
    Serial.println("Error: Division by zero.");
  } else {
    int result = a + b * c / a - c;
    Serial.print("Result: ");
    Serial.println(result);
  }
}