/* Create an Arduino program that reads an integer nnn from the Serial Monitor
 * and uses a for loop to print the first n positive integers in ascending order
 * to the Serial Monitor. Each number should be printed on a new line. */

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter a positive integer (n):");

  while (Serial.available() == 0);

  int n = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  if (n <= 0) {
    Serial.println("Invalid input. Please enter a positive integer.");
  } else {
    for (int i = 1; i <= n; i++) {
      Serial.println(i);
    }
  }
}