#include <Arduino.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#include "LiquidCrystal.h"
#include "jlmio.h"

enum systemState{
  ClockDisplay,
  StudentID,
  DistanceSensor,
  Continuous,
  Step,
  Link,
};

systemState currentState = ClockDisplay;

int main(){
  sei();
  //create LCD object
  LiquidCrystal lcd(8,9,4,5,6,7);
  
  //start LCD with 16 columns and 2 rows
  lcd.begin(16,2);
  Serial.begin(9600);
  //initisilise timer 0 as a millis timer
  jlm::timer2Init();
  


  while(1){
    switch (currentState)
    {
    case ClockDisplay:
      /* code */
      break;
    
    default:
      break;
    }

    lcd.clear();
    lcd.print(jlm::GetMillis());
    
    Serial.println(jlm::GetMillis());
    
    _delay_ms(100);
  }

  return 0;
}