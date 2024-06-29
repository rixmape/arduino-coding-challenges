/* Create an Arduino program that reads an integer between 1 and 7 from the
 * Serial Monitor and uses a switch statement to print the corresponding day of
 * the week (1 for Sunday, 2 for Monday, etc.). If the input is not between 1
 * and 7, print "Invalid day". */

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  Serial.println("Enter a day number (1-7):");

  while (Serial.available() == 0);

  int dayNumber = Serial.parseInt();

  while (Serial.available() > 0) {
    Serial.read();
  }

  switch (dayNumber) {
    case 1:
      Serial.println("Sunday");
      break;
    case 2:
      Serial.println("Monday");
      break;
    case 3:
      Serial.println("Tuesday");
      break;
    case 4:
      Serial.println("Wednesday");
      break;
    case 5:
      Serial.println("Thursday");
      break;
    case 6:
      Serial.println("Friday");
      break;
    case 7:
      Serial.println("Saturday");
      break;
    default:
      Serial.println("Invalid day");
  }
}