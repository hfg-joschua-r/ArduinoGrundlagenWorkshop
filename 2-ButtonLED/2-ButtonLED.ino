const int BUTTON = 2;
const int LED = 3;
int BUTTONstate = 0;

void setup()
{
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  BUTTONstate = digitalRead(BUTTON);
  if (BUTTONstate == HIGH)
  {
    digitalWrite(LED, HIGH);
  } 
  else{
    digitalWrite(LED, LOW);
  }
}

/*Aufgabe 1: 

Zweite LED anschließen die 
1. gleichzeitig leuchtet wie die erste.

Aufgabe 2: 
Die Zweite LED soll jetzt nur leuchten wenn der button nicht gedrück ist

*/
