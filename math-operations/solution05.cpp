/* Design an Arduino program that reads an integer from the Serial Monitor and
 * demonstrates the use of both the increment (++) and decrement (--) operators.
 * The program should print the initial value, the value after a pre-increment,
 * the value after a post-increment, the value after a pre-decrement, and the
 * value after a post-decrement. */

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

  Serial.print("Pre-increment: ");
  ++value;
  Serial.println(value);

  Serial.print("Post-increment: ");
  value++;
  Serial.println(value);

  Serial.print("Pre-decrement: ");
  --value;
  Serial.println(value);

  Serial.print("Post-decrement: ");
  value--;
  Serial.println(value);
}
