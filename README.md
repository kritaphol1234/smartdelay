[![My Skills](https://skillicons.dev/icons?i=arduino&perline=3)](https://skillicons.dev)

# smartdelay
ใช้สำหรับ couter เวลา 100 ms สาเหตุที่ใช้ 100 ms เพราะถ้าเรายึงนับเวลาละเอียดมากนั้นมีโอกาศพลาดมากกว่า หรือ erro มากและในการเขียนโปรแกรมส่วนมาก จะใช้การ count เวลามากกว่า 100 ms
### ใช้สำหรับ microcontroller เช่น 
1.esp32 ✅

2.esp8266 ✅

```
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
```
ที่เห็นด้านบนจะเป็นจะเป็นในส่วนของการ count ทั้งหมด

```
counter++;
```
จะเพิ่มขึ้น 1 ทุก 100 ms
