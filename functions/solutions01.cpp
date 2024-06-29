/* Write an Arduino program that defines a function named calculateSum which
 * takes two integers as parameters and returns their sum. In the setup
 * function, read two integers from the Serial Monitor, call the calculateSum
 * function with these integers, and print the result to the Serial Monitor. */

int calculateSum(int a, int b) {
  return a + b;
}

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("Enter two integers:");

  while (Serial.available() == 0);

  int num1 = Serial.parseInt();
  int num2 = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  int sum = calculateSum(num1, num2);
  Serial.print("The sum is: ");
  Serial.println(sum);
}

void loop() {
  // The loop function is empty as the calculation is done only once in setup
}
