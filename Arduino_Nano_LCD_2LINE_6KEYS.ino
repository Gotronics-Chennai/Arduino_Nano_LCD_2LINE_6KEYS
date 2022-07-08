
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int a =0;
int b =0;
int c =0;
int d =0;
int e =0;
int f =0;


int SW1 = 8;
int SW2 = 9;
int SW3 = 10;
int SW4 = 11;
int SW5 = 12;
int SW6 = A0;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("GOTRONICS");
  pinMode(SW1,INPUT);
  pinMode(SW2,INPUT);
  pinMode(SW3,INPUT);
  pinMode(SW4,INPUT);
  pinMode(SW5,INPUT);
  pinMode(SW6,INPUT);
}

void loop() {
  int S1 = digitalRead(SW1);
  int S2 = digitalRead(SW2);
  int S3 = digitalRead(SW3);
  int S4 = digitalRead(SW4);
  int S5 = digitalRead(SW5);
  int S6 = digitalRead(SW6);
  
  
    lcd.setCursor(2,1);
    lcd.print(a);
    lcd.setCursor(4, 1);
    lcd.print(b);
    lcd.setCursor(6, 1);
    lcd.print(c);
    lcd.setCursor(8, 1);
    lcd.print(d);
    lcd.setCursor(10, 1);
    lcd.print(e);
    lcd.setCursor(12, 1);
    lcd.print(f);
  
  if (S1 == LOW) {
    a ++;
    lcd.setCursor(2, 1);
    lcd.print(a);
     delay(200);
    }
    if (S2 == LOW) {
    b ++;
    lcd.setCursor(4, 1);
    lcd.print(b);
     delay(200);
    }
    if (S3 == LOW) {
    c ++;
    lcd.setCursor(6, 1);
    lcd.print(c);
     delay(200);
    }
    if (S4 == LOW) {
    d ++;
    lcd.setCursor(8, 1);
    lcd.print(d);
     delay(200);
    }
    if (S5 == LOW) {
    e ++;
    lcd.setCursor(10, 1);
    lcd.print(e);
     delay(200);
    }
    if (S6 == LOW) {
    f ++;
    lcd.setCursor(12, 1);
    lcd.print(f);
     delay(200);
    }
}
