/* Create an Arduino program that reads an integer from the Serial Monitor and
 * categorizes it as "Negative", "Zero", or "Positive". Use nested if...else
 * statements to determine the category and print the result to the Serial
 * Monitor. */

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

  if (number < 0) {
    Serial.println("Negative");
  } else {
    if (number == 0) {
      Serial.println("Zero");
    } else {
      Serial.println("Positive");
    }
  }
}
