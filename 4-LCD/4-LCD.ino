#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  


void setup()
{
  lcd.init(); 
  lcd.backlight();
  lcd.setCursor(3,0); //setzt den Cursor, also den Ort auf dem Display an dem ihr schreiben wollt

  //Beispiel: lcd.setCursor(3,0) setzt wird die folgende nachricht an die 3. Stelle in der 0. (also der Ersten) zeile schreiben.
  
  lcd.print("Hello, World!"); //schreibt eine Nachricht auf das LCD Display
  lcd.setCursor(3,1);
  lcd.print("Hallo, e.tage!");
   lcd.setCursor(2,2);
  lcd.print("Arduino Workshop");
   lcd.setCursor(3,3);
  lcd.print("Sommer 2022");
}

void loop()
{
}

/*
 * Aufgabe 1: baut euch ein Digitales Namenschild! Darin sollte stehen:
 *  1. Euer Name
 *  2. Euer Alter
 *  3. & 4. Was auch immer euch einfällt!
 *  
 *  
 */
