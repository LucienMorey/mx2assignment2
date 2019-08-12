#include <avr/io.h>
#include <avr/interrupt.h>
#include "jlmio.h"
#include "LiquidCrystal.h"


int main(){
  LiquidCrystal lcd(8,9,4,5,6,7);

  lcd.begin(16,2);

  lcd.print("Hi");


  while(1){

  }

  return 0;
}