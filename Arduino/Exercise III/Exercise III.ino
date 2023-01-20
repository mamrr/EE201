void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT);
}

void loop() {
  // if pin is high, then prints "Hello World!", else prints "It's 2023"
  if (digitalRead(13) == 1) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }
  delay(1000);
}
