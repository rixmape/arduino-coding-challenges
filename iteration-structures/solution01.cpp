/* Write an Arduino program that reads integers from the Serial Monitor until a
 * negative number is entered. The program should use a while loop to
 * continuously read and sum the entered integers. Once a negative number is
 * encountered, the program should print the total sum of all previously entered
 * positive integers to the Serial Monitor. */

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter positive integers (enter a negative number to stop):");

  int sum = 0;
  int number;

  do {
    while (Serial.available() == 0);
    number = Serial.parseInt();

    while (Serial.available() > 0) {
      Serial.read();
    }

    if (number > 0) {
      sum += number;
    }
  } while (number >= 0);

  Serial.print("Sum of positive integers: ");
  Serial.println(sum);
}