#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  
//Benötigt: 10k ohm widerstand, Photowiderstand
//Steckplan: https://hackster.imgix.net/uploads/attachments/847775/image_NtBBZZXsrY.png?auto=compress%2Cformat&w=680&h=510&fit=max

int sensorPin = A0;
int sensorWert = 0;

void setup()
{
  pinMode(sensorPin, INPUT);
  lcd.init(); 
  lcd.backlight();
  lcd.setCursor(0,0); //setzt den Cursor, also den Ort auf dem Display an dem ihr schreiben wollt

  //Beispiel: lcd.setCursor(3,0) setzt wird die folgende nachricht an die 3. Stelle in der 0. (also der Ersten) zeile schreiben.
  
  lcd.print("Abstand betraegt:"); //schreibt eine Nachricht auf das LCD Display
 
}

void loop()
{
  lcd.setCursor(0,0); //setzt den Cursor, also den Ort auf dem Display an dem ihr schreiben wollt  
  lcd.print("Abstand betraegt:"); //schreibt eine Nachricht auf das LCD Display
  
  sensorWert = analogRead(sensorPin);
  lcd.setCursor(1,1);
  lcd.print("Wert ist: ");
  lcd.print(sensorWert);
  
  //Hier kann überprüft werden ob der Sensor einen gewissen Wert über oder unterschreitet
  
  delay(500);
}

/*
 * Aufgabe 1: 
 * Erweitere den oberen Code so, dass WENN der Wert eine bestimmt grenze überschreitet eine Nachricht in Zeile 3 ausgegeben wird.
 *
 * Tipp hierzu: denkt an die if-Bedingung ;)
 *  
 *  Bei weiteren Fragen gerne an mich wenden! 
 *  
 *  Aufgabe 2: Werdet kreativ! Bewegt sich vielleicht ein Motor wenn der Sensor einen gewissen Wert hat? Piepst ein kleiner Buzzer? oder passiert doch noch was ganz anderes?
 */
