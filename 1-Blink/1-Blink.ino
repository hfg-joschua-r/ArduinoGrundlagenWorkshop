void setup() {
  // Initialisierung des digitalen Pins LED_BUILTIN als Ausgang.
  pinMode(LED_BUILTIN, OUTPUT);
}

// die Schleifenfunktion läuft immer wieder und immer weiter
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Schalten die LED ein (HIGH ist der Spannungspegel)
  delay(1000);                       // warte eine sekunde
  digitalWrite(LED_BUILTIN, LOW);    // schalte die LED aus indem man die Spannung auf LOW setzt
  delay(1000);                       // warte eine Sekunde
}

{
/*Aufgabe 1: 
Lege eine Variable an und ersetze die 1000ms durch diese.
Beispiel: 
int pause = 1000;

Aufgabe 2: 
Verändere diese Variable so, dass die Pause kürzer oder Länger wird

Aufgabe 3: 
Lege eine zweite Variable an und lass das Licht in verschiedenen Abständen blinken


*/
