/* Design an Arduino program that reads integers from the Serial Monitor and
 * calculates the product of the entered integers using a do...while loop. The
 * loop should continue until a zero is entered. After encountering zero, the
 * program should print the product of all previously entered non-zero integers
 * to the Serial Monitor. */

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter integers (enter 0 to stop):");

  long product = 1;
  int number;

  do {
    while (Serial.available() == 0);
    number = Serial.parseInt();

    while (Serial.available() > 0) {
      Serial.read();
    }

    if (number != 0) {
      product *= number;
    }
  } while (number != 0);

  Serial.print("Product of non-zero integers: ");
  Serial.println(product);
}