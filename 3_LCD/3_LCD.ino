#include <LiquidCrystal_I2C.h>
#include <Wire.h>
  // set the LCD number of columns and rows
int lcdColumns = 16;
int lcdRows = 2;
// set LCD address, number of columns and rows
// if you don't know your display address, run an I2C scanner sketch
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  

void setup()
{
    // initialize LCD
    lcd.init();
    // turn on LCD backlight                      
    lcd.backlight();
    pinMode(13,OUTPUT);
}

void loop(){
    // set cursor to first column, first row
    lcd.setCursor(0, 0);
    // print message
    lcd.print("Hello World!");
    // set cursor to first column, second row
    int ldr_Value=analogRead(A0);
    Serial.print("LDR VALUE:");
    Serial.println(ldr_Value);
    lcd.setCursor(0,1);
    lcd.print("LDR : ");
    lcd.print(ldr_Value);
    
    delay(1000);
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    lcd.clear(); 
}

  
