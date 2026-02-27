char data;

void setup() {
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    data = Serial.read();

    if (data == '1') {
      digitalWrite(7, HIGH);
      Serial.println("Device ON");
    }

    else if (data == '0') {
      digitalWrite(7, LOW);
      Serial.println("Device OFF");
    }
  }
}
