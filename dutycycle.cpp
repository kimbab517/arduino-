int buttonState;
int buttonPin= 13;
int ledPin= 10;
int count = -1;
int dutycycle;
int button_out[7] = {0,51,102,153,204,255,0};

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);
 // Serial.print("HELLOP");


}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  //Serial.print("hellp");
  if(buttonState == 1){
  //Serial.print("hellp");

  
    count = count+1;
    analogWrite(ledPin, button_out[count]);
    dutycycle = map(button_out[count],0 ,255 ,0,1023 );
    Serial.print("Duty Cycle: ");
    Serial.print(dutycycle);
    Serial.println(" %");
    delay(300);
    if(count == 6){
      count = 0;
    }

  }
}
