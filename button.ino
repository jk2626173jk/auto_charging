int check=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,INPUT_PULLUP);
  pinMode(2,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  check=digitalRead(13);
  if(check==0)
  {
    digitalWrite(2,HIGH);
    Serial.println(check);
    }
   Serial.println(check);
   digitalWrite(2,LOW);    //arduino會自動供電
  

}
