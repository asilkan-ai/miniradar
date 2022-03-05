#include <Servo.h>

const byte buzzerPin=4;
const byte trigPin=6; 
const byte echoPin=7; 
const byte servoPin=5;
long sure; 
int mesafe;

Servo servo_motor; 

void setup()
{
  pinMode(buzzerPin, OUTPUT); 
  pinMode(trigPin, OUTPUT);//sensorden sinyal üretir
  pinMode(echoPin, INPUT); //geri donen sinyali karsilar
  Serial.begin(9600); 
  servo_motor.attach(servoPin); 
}

void loop()
{
  /*motor 15-165 derece arasinda 1 derecelik 
  acilarla donmesi icin for dongüsü*/
  for(int konum=15;konum<=165;konum++){
    servo_motor.write(konum);
    delay(150);
    mesafe=mesafeHesapla();
    verileriGoster(konum,mesafe);
    /*25 cm veya daha az yakinlikta cisim varsa
    buzzer uyari verir*/
    if(mesafe<=25){
      digitalWrite(buzzerPin,HIGH);
      delay(100);
      digitalWrite(buzzerPin,LOW);
      delay(100);
    
    }
  }
  //Ters yon icin ikinci for dongusu
  for(int konum=164;konum>15;konum--){
    servo_motor.write(konum); 
    delay(150); 
    mesafe=mesafeHesapla();
    verileriGoster(konum,mesafe);
    
    if(mesafe<=25){
      digitalWrite(buzzerPin,HIGH);
      delay(100); 
      digitalWrite(buzzerPin,LOW);
      delay(100); 
    
    }
  }
}

int mesafeHesapla(){
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2); 
  digitalWrite(trigPin,HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trigPin,LOW);
  sure=pulseIn(echoPin,HIGH);
  mesafe=sure/2*0.034;
  
  return mesafe;
}

void verileriGoster(int konum,int mesafe){
  Serial.print("Konu (Derece):");
  Serial.print(konum);
  Serial.print(" --- ");
  Serial.print("Mesafe:");
  Serial.print(mesafe);  
}