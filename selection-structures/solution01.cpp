/* Write an Arduino program that reads two integers from the Serial Monitor and
 * evaluates all six relational and equality operations (==, !=, >, <, >=, <=)
 * between them. The program should print the results of each comparison as
 * either 1 (true) or 0 (false) to the Serial Monitor. */

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

  Serial.print(num1);
  Serial.print(" == ");
  Serial.print(num2);
  Serial.print(": ");
  Serial.println(num1 == num2);

  Serial.print(num1);
  Serial.print(" != ");
  Serial.print(num2);
  Serial.print(": ");
  Serial.println(num1 != num2);

  Serial.print(num1);
  Serial.print(" >  ");
  Serial.print(num2);
  Serial.print(": ");
  Serial.println(num1 > num2);

  Serial.print(num1);
  Serial.print(" <  ");
  Serial.print(num2);
  Serial.print(": ");
  Serial.println(num1 < num2);

  Serial.print(num1);
  Serial.print(" >= ");
  Serial.print(num2);
  Serial.print(": ");
  Serial.println(num1 >= num2);

  Serial.print(num1);
  Serial.print(" <= ");
  Serial.print(num2);
  Serial.print(": ");
  Serial.println(num1 <= num2);
}
