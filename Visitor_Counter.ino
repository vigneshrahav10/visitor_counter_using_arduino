const int ir1=3;
const int ir2=6;
int count=0;

void setup() {
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  Serial.begin(9600);
  Serial.println("******DIGITAL VISITOR COUNTER******");
}

void loop() {
  int ir1State=digitalRead(ir1);
  int ir2State=digitalRead(ir2);

  if (ir1State==LOW && ir2State==HIGH){
    count+=1;
    Serial.print("Total:");Serial.println(count);
    delay(500);
  }
  
  else if(ir1State==HIGH && ir2State==LOW){
        count-=1;
    Serial.print("Total:");Serial.println(count);
    delay(500);
    if (count==0){
      Serial.println("******DIGITAL VISITOR COUNTER******");
      delay(10000);
    }
  }
 

}
