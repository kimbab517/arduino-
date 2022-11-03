int photoSensorPin = 0;
int Led1 = 10 ;
int Led2 =11 ;
int Led3 =12 ;
int Led1Val = 0;
int Led2Val = 0;
int Led3Val = 0;
bool isLedOn = false;

int brightness = 650 ;
int dark = 400;
int changeColorTime = 2000;

long lastUpdate = 0;

void setup() {
  // put your setup code here, to run once:
  randomSeed(analogRead(1));
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  int brightness = analogRead(photoSensorPin);
  Serial.println(brightness);

  if(brightness < dark){
    Serial.println("Good Night");
    
    if(!isLedOn){
      LedOn(); 
      isLedOn = false;
    }
    else if(millis() > lastUpdate+changeColorTime){
      LedOn();
      isLedOn = true;
      lastUpdate = millis();
    }
  }
  else{
    Serial.println("Rise and Shine!");
    LedOff();
    isLedOn = false;
  }
  delay(1000);


}

void LedOn(){
  Led1Val = random(1,128);
  Led1Val = random(1,128);
  Led3Val = random(1,128);

  analogWrite(Led1,Led1Val);
  analogWrite(Led2,Led2Val);
  analogWrite(Led3,Led3Val);

}

void LedOff(){
  analogWrite(Led2, LOW);
  analogWrite(Led1, LOW);
  analogWrite(Led3, LOW);

  }
