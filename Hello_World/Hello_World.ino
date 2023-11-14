int val;  // definirea variabilei val
int ledpin = 13;  // definirea interfetei digitale 13

void setup()
{
  Serial.begin(9600);  
  // setarea ratei de baud la 9600 pentru a se potrivi cu configurarea software. Când este conectat la un dispozitiv specific (de exemplu, Bluetooth), rata de baud trebuie să fie aceeași cu aceasta.
  
  pinMode(ledpin, OUTPUT);  
  // inițializarea pinului digital 13 ca ieșire. Când se utilizează porturi I/O pe un Arduino, acest tip de configurare este întotdeauna necesar.
}

void loop()
{
  val = Serial.read();  // citirea instrucțiunii sau caracterului de la PC la Arduino și asignarea lor la Val.
  
  if (val == 'R')  // determinarea dacă instrucțiunea sau caracterul primit este "R".
  {
    // dacă este "R",
    digitalWrite(ledpin, HIGH);  // setarea LED-ului pe pinul digital 13 la nivel înalt.
    delay(500);
    digitalWrite(ledpin, LOW);  // setarea LED-ului pe pinul digital 13 la nivel scăzut.
    delay(500);
    Serial.println("Salut lume!");  // afișarea șirului "TechConnect!".
  }
}
