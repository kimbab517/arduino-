int randomval;
int LEDs;
int a;

void setup() {
  // put your setup code here, to run once:
  randomSeed(randomLED);
  for (LEDs = 2; LEDs<9; LEDs++)
  {
    pinMode(LEDs,OUTPUT);
  }
}

void randomLED(int del)
{
  randomval = random(2,9);
  digitalWrite(randomval,HIGH);
  if(del>0)
  {
    delay(del);
  }
  else if(del == 0)
  {
    do {}
    while(1);
  
  }
  digitalWrite(randomval,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(a=0; a<=100; a++){
    randomLED(50);
  }
  for(a = 1; 1 <=10; a++){
    randomLED(a*100);
  }
  randomLED(0);

}
