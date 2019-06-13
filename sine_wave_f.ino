int x,y;
float a;
void setup() {
  // put your setup code here, to run once:
pinMode(A2,OUTPUT);
pinMode(A1,INPUT);
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<=360;i++)
{
 a=sin(radians (i));
 i=i+5;
 Serial.print("vakue of i");
 Serial.println(i);
x=analogRead(A1);
a=a*x;
 Serial.print("value of sine");
 Serial.println(a);
analogWrite(A2,a);
y=analogRead(A0);
delay(y);
}
}
