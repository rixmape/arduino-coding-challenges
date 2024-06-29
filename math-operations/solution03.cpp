/* Write an Arduino program that reads three integers from the Serial Monitor
 * and evaluates the expression ((a + b) * c) / (a - b). The program should use
 * parentheses to group the operations explicitly, ensuring the correct order of
 * evaluation, and print the result to the Serial Monitor. */

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

  if (a - b == 0) {
    Serial.println("Error: Division by zero");
  } else {
    float result = ((float)a + b) * c / (a - b);

    Serial.print("Result: ");
    Serial.println(result, 2);
  }
}
