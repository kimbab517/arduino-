int buttonPin = 13;
int ledPin = 10 ;
int buttonState;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(ledPin,10);
}


void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  if(buttonState == 1){
    digitalWrite(10,HIGH);
  }
  else{
    digitalWrite(10,LOW);
  }
}
