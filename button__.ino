int check=0;
int flag=0;
int i;
int duration=0;

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
    flag=1;
    
    }
  else if(check==1&&flag==1){
      /*方法一
        for(i=0;i<=20;i+=1){
        digitalWrite(2,HIGH);
        delay(250);
        digitalWrite(2,LOW);
        delay(250);
      }*/
      //方法二
      int starttime=millis();
      while(duration<=5000){
        digitalWrite(2,HIGH);
        delay(250);
        digitalWrite(2,LOW);
        delay(250);
        duration=millis()-starttime;
        Serial.println(duration);
        }
      
      
      flag=0;
      duration=0;
     
    }
  else{
    digitalWrite(2,LOW);
  
  }
  

}
