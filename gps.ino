
int led=13;
int gps_pwr_ctrl=11;

void setup()
{
  Serial1.begin(9600,SERIAL_8N1);
  pinMode(led,OUTPUT);
  pinMode(gps_pwr_ctrl,OUTPUT);
  digitalWrite(gps_pwr_ctrl,HIGH);
}

void loop()
{
  int c;
  if( Serial1.available() > 0 ) {
    c = Serial1.read();
    Serial.write(c);
  }
  
  digitalWrite(led,HIGH);
//  delay(5000);
//  digitalWrite(led,LOW);
//  delay(5000);
}

