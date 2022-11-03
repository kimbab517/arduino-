int analog_pin = 0  ;
float analog_val;
float analog_conv;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analog_val = analogRead(analog_pin);
  Serial.print("Raw Values: "); Serial.print(analog_val,2);
  analog_conv = map(analog_val,0 ,255 ,0 ,1023 );
  Serial.print(" |Converted Value: "); Serial.print(analog_conv);
  Serial.print("V");




}

void loop() {
  // put your main code here, to run repeatedly:

}
