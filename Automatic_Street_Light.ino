// Automatic Street Light using LDR

const int ldrPin = A0;
const int ledPin = 8;
const int relayPin = 7;

// Adjust this value after testing
const int threshold = 500;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(relayPin, OUTPUT);

  Serial.begin(9600);

  digitalWrite(ledPin, LOW);
  digitalWrite(relayPin, LOW);
}

void loop()
{
  int ldrValue = analogRead(ldrPin);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Dark condition
  if (ldrValue < threshold)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(relayPin, HIGH);

    Serial.println("Dark - Street Light ON");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(relayPin, LOW);

    Serial.println("Bright - Street Light OFF");
  }

  delay(500);
}