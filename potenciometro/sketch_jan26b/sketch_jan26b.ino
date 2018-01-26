void setup() {
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int potenciometro=0;
  potenciometro=analogRead(0);
  Serial.println(potenciometro);
  delay(200);
}
