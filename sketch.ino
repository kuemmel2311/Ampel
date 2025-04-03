//Eingänge/Ausgänge festlegen
// Bibliothek werden hier gelesen/Variablen erstellt

#define red 12          // red = rote LED
// const int red = 12;   Macht das selbe wie Zeile 4
#define yellow 7
#define green 2



void setup() {
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(1000);        //1000ms = 1 Sekunde
  digitalWrite(red, LOW);
  delay(1000);
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(1000);
  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  delay(1000);
}
