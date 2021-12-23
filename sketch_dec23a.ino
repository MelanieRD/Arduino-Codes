void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
  
pinMode(2, INPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);






}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(2)){
  
digitalWrite(5, HIGH);
int valueM =  1;
delay(700);

  if(valueM == 1){
    
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    valueM = 2;
    delay(700);
    } 

    if(valueM == 2){
    
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    valueM = 0;
    delay(700);
    digitalWrite(3, LOW);
    } 
    
  }

}
