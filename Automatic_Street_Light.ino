const int ldrDO = 2;
const int light = 8;

void setup()
{
  pinMode(ldrDO, INPUT);
  pinMode(light, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int ldrState = digitalRead(ldrDO);

  Serial.print("LDR DO: ");
  Serial.println(ldrState);

  if (ldrState == HIGH)
  {
    // Dark
    digitalWrite(light, HIGH);
    Serial.println("Night - Light ON");
  }
  else
  {
    // Bright
    digitalWrite(light, LOW);
    Serial.println("Day - Light OFF");
  }

  delay(500);
}