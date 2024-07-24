
int emgPin = A0;
int emgValue = 0;
const int buzz = 11;

void setup() {
  Serial.begin(9600);
  pinMode(buzz, OUTPUT);
}

void loop() {
  emgValue = analogRead(emgPin);
  Serial.println(emgValue);
  if(emgValue>400)
  {
    digitalWrite(buzz, HIGH);
    delay(1000);
    digitalWrite(buzz, LOW);
  }
  delay(1000);

}
