/* Create an Arduino program that prompts the user to enter a seed value through
 * the Serial Monitor. The program should then use this seed value to initialize
 * the random number generator. After seeding, the program should generate and
 * print five random integers between 1 and 100, with each random number
 * displayed on a new line. */

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter a seed value (integer):");

  while (Serial.available() == 0);

  unsigned long seed = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  randomSeed(seed);

  Serial.println("Five random numbers between 1 and 100:");
  for (int i = 0; i < 5; i++) {
    int randomNumber = random(1, 101);
    Serial.println(randomNumber);
  }
}
