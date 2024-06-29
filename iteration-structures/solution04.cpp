/* Write an Arduino program that reads characters from the Serial Monitor until
 * the character 'q' is entered. After entering 'q', the program should print
 * "Quitting..." and stop reading further input. Do not print the newline
 * character. */

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter characters (enter 'q' to quit):");

  char input;

  do {
    while (Serial.available() == 0);
    input = Serial.read();

    while (Serial.available() > 0) {
      Serial.read();
    }

    if (input != 'q' && input != '\n') {
      Serial.print("You entered: ");
      Serial.println(input);
    }
  } while (input != 'q');

  Serial.println("Quitting...");
  while (true); // Stop reading further input
}