void setup() {
  pinMode(2, OUTPUT); // d
  pinMode(3, OUTPUT); // e
  pinMode(4, OUTPUT); // c
  pinMode(5, OUTPUT); // f
  pinMode(6, OUTPUT); // b
  pinMode(7, OUTPUT); // a
  pinMode(8, OUTPUT); // g
}

void loop() {
  // Countdown from 9 to 0 in 15 seconds (1.5 seconds per number)

  // 9
  digitalWrite(2, LOW); // d
  digitalWrite(3, HIGH); // e
  digitalWrite(4, LOW); // c
  digitalWrite(5, LOW); // f
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // a
  digitalWrite(8, LOW); // g
  delay(1500);

  // 8
  digitalWrite(2, LOW); // d
  digitalWrite(3, LOW); // e
  digitalWrite(4, LOW); // c
  digitalWrite(5, LOW); // f
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // a
  digitalWrite(8, LOW); // g
  delay(1500);

  // 7
  digitalWrite(2, HIGH); // d
  digitalWrite(3, HIGH); // e
  digitalWrite(4, LOW); // c
  digitalWrite(5, HIGH); // f
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // a
  digitalWrite(8, HIGH); // g
  delay(1500);

  // 6
  digitalWrite(2, LOW); // d
  digitalWrite(3, LOW); // e
  digitalWrite(4, LOW); // c
  digitalWrite(5, LOW); // f
  digitalWrite(6, HIGH); // b
  digitalWrite(7, LOW); // a
  digitalWrite(8, LOW); // g
  delay(1500);

  // 5
  digitalWrite(2, LOW); // d
  digitalWrite(3, HIGH); // e
  digitalWrite(4, LOW); // c
  digitalWrite(5, LOW); // f
  digitalWrite(6, HIGH); // b
  digitalWrite(7, LOW); // a
  digitalWrite(8, LOW); // g
  delay(1500);

  // 4
  digitalWrite(2, HIGH); // d
  digitalWrite(3, HIGH); // e
  digitalWrite(4, LOW); // c
  digitalWrite(5, LOW); // f
  digitalWrite(6, LOW); // b
  digitalWrite(7, HIGH); // a
  digitalWrite(8, LOW); // g
  delay(1500);

  // 3
  digitalWrite(2, LOW); // d
  digitalWrite(3, HIGH); // e
  digitalWrite(4, LOW); // c
  digitalWrite(5, HIGH); // f
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // a
  digitalWrite(8, LOW); // g
  delay(1500);

  // 2
  digitalWrite(2, LOW); // d
  digitalWrite(3, LOW); // e
  digitalWrite(4, HIGH); // c
  digitalWrite(5, HIGH); // f
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // a
  digitalWrite(8, LOW); // g
  delay(1500);

  // 1
  digitalWrite(2, HIGH); // d
  digitalWrite(3, HIGH); // e
  digitalWrite(4, LOW); // c
  digitalWrite(5, HIGH); // f
  digitalWrite(6, LOW); // b
  digitalWrite(7, HIGH); // a
  digitalWrite(8, HIGH); // g
  delay(1500);

  // 0
  digitalWrite(2, LOW); // d
  digitalWrite(3, LOW); // e
  digitalWrite(4, LOW); // c
  digitalWrite(5, LOW); // f
  digitalWrite(6, LOW); // b
  digitalWrite(7, LOW); // a
  digitalWrite(8, HIGH); // g
  delay(1500);
}
