int buttonPin=7;
int ledVermelho=10;
int ledAmarelo=4;

int estadoLed=0;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(buttonPin, INPUT);

  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
}

void loop() {

  if (digitalRead(buttonPin) == HIGH) {

    estadoLed++;

    if (estadoLed > 2) {
      estadoLed = 0;
    }

    if (estadoLed == 1) {
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledAmarelo, LOW);
    }

    else if (estadoLed == 2) {
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, HIGH);
    }

    else {
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, LOW);
    }

    delay(500);
  }
}
