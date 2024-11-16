unsigned long time_S;
unsigned long time_X;
int counter;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
          time_X = millis();
      if(time_X < time_S)time_S = time_X;    
      if(time_X -time_S > 99){
          time_S = time_X;
          
          counter++;
          Serial.println(counter);
      }
}
