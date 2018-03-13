int check=0;
int flag=0;
int i;
int duration=0;
int starttime;

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
    starttime=millis();
    digitalWrite(2,HIGH);
    Serial.println(check);
    flag=1;
    
    }
  else if(check==1&&flag==1){
      
      duration=millis()-starttime;
      Serial.println(duration);
      duration=duration/1000;
      Serial.println(duration);
      for(i=0;i<=duration;i+=1){
        digitalWrite(2,HIGH);
        delay(250);
        digitalWrite(2,LOW);
        delay(250);
        
        Serial.println(duration);
        }
      
      
      flag=0;
      duration=0;
     
    }
  else{
    digitalWrite(2,LOW);
  
  }
  

}
