int potPin = 0 ;
int L1 = 11;
int L2 = 12 ;
int L3 = 13 ;
int val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potPin);
  Serial.print("Potentiometer: ");
  Serial.print(val);

  if(val>= 0  && val< 173 ){
    digitalWrite(L1,HIGH);

  }
  else if (val >= 173 && val<256){
    digitalWrite(L2, HIGH);

  }
  else{
    digitalWrite(L3, HIGH);
  }
  delay(200);
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
  


  }
