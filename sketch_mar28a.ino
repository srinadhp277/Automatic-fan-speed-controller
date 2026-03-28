#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int greenLed = 6;
int yellowLed = 7;
int redLed = 8;
int motorpwm = 9;
int motorA =10;
int tempIp = A0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(greenLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(redLed,OUTPUT);
  pinMode(motorpwm,OUTPUT);
  pinMode(motorA,OUTPUT);
  pinMode(tempIp,INPUT);
  digitalWrite(motorA, HIGH);
  lcd.begin(16, 2);

}

void loop() {
  
  int t = analogRead(tempIp);
  float tCelsius = (t*500.0)/1023.0;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tCelsius);
  lcd.print(" C");

  if (tCelsius >= 31){
    digitalWrite(redLed,HIGH);
    digitalWrite(yellowLed,LOW);
    digitalWrite(greenLed,LOW);
    analogWrite(motorpwm,255);
    lcd.setCursor(0, 1);
    lcd.print("Fan: High");
    
  }else if(tCelsius >= 28){
    digitalWrite(redLed,LOW);
    digitalWrite(yellowLed,HIGH);
    digitalWrite(greenLed,LOW);
    analogWrite(motorpwm,155);
    lcd.setCursor(0, 1);
    lcd.print("Fan: Medium");
  }else{
    digitalWrite(redLed,LOW);
    digitalWrite(yellowLed,LOW);
    digitalWrite(greenLed,HIGH);
    analogWrite(motorpwm,75);
    lcd.setCursor(0, 1);
    lcd.print("Fan: Low");
  }
  delay(500);

}
