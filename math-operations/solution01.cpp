/* Create an Arduino program that reads two integers from the
 * Serial Monitor, performs floating-point division by casting one of the
 * integers to a float. Ensure the program handles positive and negative
 * integers and displays the result with two decimal places. */

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter two integers:");

  while (Serial.available() == 0);

  int a = Serial.parseInt();
  int b = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  float result = (float)a / b;
  Serial.print("Result: ");
  Serial.println(result, 2);
}