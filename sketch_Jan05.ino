void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(5, INPUT);
for(int i= 2; i <5; i++ ){

pinMode(i, OUTPUT);
digitalWrite(i, LOW);

}


}


void loop() {

 
 const float baselineTemp = 20.0;
 int sensorValue = analogRead(A0);

 //ADC to Voltage
 float voltaje = (sensorValue/1024.0)*5.0;

 //Voltage to Degrees
 float temperature = (voltaje - .5)*100;
    
      Serial.print("La temperatura es: ");
      Serial.println(sensorValue);
      
      Serial.print("El voltaje es: ");
      Serial.println(voltaje);

      Serial.print("La temperatura en celcium es: ");
      Serial.println(temperature);

      
if(temperature < baselineTemp+2){

  for(int i=2; i < 5; i++){
    digitalWrite(i, LOW);
    }}else if(temperature >= baselineTemp+2 && temperature < baselineTemp+4 ){
          digitalWrite(2, HIGH);
          digitalWrite(3, LOW);
          digitalWrite(4, LOW);
      }else if(temperature >= baselineTemp+4 && temperature < baselineTemp+6 ){
          digitalWrite(2, LOW);
          digitalWrite(3, HIGH);
          digitalWrite(4, LOW);
      }   else if( temperature >= baselineTemp+6 ){

         for(int i=2; i < 5; i++){
         digitalWrite(i, HIGH); }
      }

  delay(1);
}
