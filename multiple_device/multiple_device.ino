const int Sm_Dt = 10;
const int alarm = 8;
const int LED_temp = 2;
const int Temp = 3;
const int LED_ldr = 6;
const int LDR = 7;
int temp;
int ldr;
int a;
void setup() {
  // put your setup code here, to run once:
pinMode(Sm_Dt, INPUT);
pinMode(alarm, OUTPUT);
pinMode(LED_temp, OUTPUT);
pinMode(Temp, INPUT);
pinMode(LDR, INPUT);
pinMode(LED_ldr, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
a = digitalRead(Sm_Dt);
//analogRead(Temp);
//print("Temperature Value: ");
//Serial.println(analogRead(Temp));
Serial.println(a);
ldr = analogRead(LDR);
//print("LDR Value: ");
Serial.println(ldr);
if (Sm_Dt == HIGH)
{
  digitalWrite(alarm, HIGH);
}
else 
{
  digitalWrite(alarm, LOW);
}
/*if (ldr < 300)
{
  digitalWrite(LED_ldr, HIGH);
}
else 
{
  digitalWrite(LED_ldr, LOW);
}
if (temp > 10)
{
  digitalWrite(LED_temp, HIGH);
}
else 
{
  digitalWrite(LED_temp, LOW);
}*/
}
