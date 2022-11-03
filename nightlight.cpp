int sensorPin = 0 ;
int ledPin = 12;
int mapped;
int lightLevel;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  lightLevel = analogRead(sensorPin);
  Serial.println(lightLevel);
  mapped = map(lightLevel,0,255,0,1023);
  analogWrite(ledPin,mapped);

}
