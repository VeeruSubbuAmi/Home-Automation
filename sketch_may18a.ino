#include<SoftwareSerial.h>
SoftwareSerial abc(3,4);
char motion;
void setup() {
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
   digitalWrite(0, HIGH);
   digitalWrite(2, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, HIGH);
   digitalWrite(13, HIGH);
    
  Serial.begin(9600);
  abc.begin(9600);
  motion=0;
  Serial.println(motion);
  Serial.println("motion");
}
void loop() {
  if (abc.available() > 0)
  {
     motion = abc.read();
          if (motion == 'A')
          {
            digitalWrite(5, LOW);
            Serial.println(motion);
          }
          else if (motion == 'B')
          {
            digitalWrite(5, HIGH);
            Serial.println(motion);
          }
          else if (motion == 'C')
          {
            digitalWrite(6, LOW);
            Serial.println(motion);
          }
      
          else if (motion == 'D')
          {
            digitalWrite(6, HIGH);
            Serial.println(motion);
          }
      
          else if (motion == 'G')
          {
            digitalWrite(7, LOW);
            Serial.println(motion);
          }
      
           else if (motion == 'H')
          {
            digitalWrite(7, HIGH);
            Serial.println(motion);
          }
      
          else if (motion == 'E')
          {
            digitalWrite(8, LOW);
            Serial.println(motion);
          }
      
          else if (motion == 'F')
          {
            digitalWrite(8, HIGH);
            Serial.println(motion);
          }
      
          else if (motion == 'I')
          {
            digitalWrite(9, LOW);
            Serial.println(motion);
          }
      
          else if (motion == 'J')
          {
            digitalWrite(9, HIGH);
            Serial.println(motion);
          }
      
          else if (motion == 'K')
          {
            digitalWrite(10, LOW);
            Serial.println(motion);
          }
      
          else if (motion == 'L')
          {
            digitalWrite(10, HIGH);
            Serial.println(motion);
          }
      
          else if (motion == 'M')
          {
            digitalWrite(11, LOW);
            Serial.println(motion);
          }
          else if (motion == 'N')
          {
            digitalWrite(11, HIGH);
            Serial.println(motion);
          }
          else if (motion == 'O')
          {
            digitalWrite(12, LOW);
            Serial.println(motion);
          }
          else if (motion == 'P')
          {
            digitalWrite(12, HIGH);
            Serial.println(motion);
          }
          else if (motion == 'S')
          {
            digitalWrite(13, LOW);
            Serial.println(motion);
          }
          else if (motion == 'T')
          {
            digitalWrite(13, HIGH);
            Serial.println(motion);
          }
          else if (motion == 'U')
          {
            digitalWrite(2, LOW);
            Serial.println(motion);
          }
          else if (motion == 'V')
          {
            digitalWrite(2, HIGH);
            Serial.println(motion);
          }
         /* else if (motion == 'Q')
          {
           digitalWrite(2, LOW);
            Serial.println(motion);
          }
          else if (motion == 'R')
          {
            digitalWrite(2, HIGH);
            Serial.println(motion);
          }
          else if (motion == 'W')
          {
           digitalWrite(2, LOW);
            Serial.println(motion);
          }
          else if (motion == 'X')
          {
            digitalWrite(2, HIGH);
            Serial.println(motion);
      }*/
  }}
