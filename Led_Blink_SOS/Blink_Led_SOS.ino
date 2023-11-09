void setup() {
  // puneți codul de configurare aici, pentru a rula o singură dată:
  pinMode(13, OUTPUT); // setează pinul 13 ca ieșire
}

void loop() {
  // 3 clipiri scurte
  digitalWrite(13, HIGH); 
  // aprinde LED-ul (HIGH este nivelul de tensiune)
  delay(500); 
  // așteaptă jumătate de secundă
  digitalWrite(13, LOW); 
  // stinge LED-ul prin scăderea tensiunii
  delay(300); 
  // pauză de 300 de milisecunde, aproximativ 1/3 dintr-o secundă
  digitalWrite(13, HIGH);   
  delay(500);              
  digitalWrite(13, LOW);    
  delay(300); 
  digitalWrite(13, HIGH);   
  delay(500);              
  digitalWrite(13, LOW);    
  delay(300);   
  
   // trei clipiri lungi
  digitalWrite(13, HIGH); // aprinde LED-ul 
  delay(1500); // așteaptă o secundă și jumătate
  digitalWrite(13, LOW); // stinge LED-ul prin scăderea tensiunii
  delay(300); 
  digitalWrite(13, HIGH);   
  delay(1500);             
  digitalWrite(13, LOW);   
  delay(300); 
  digitalWrite(13, HIGH);   
  delay(1500);             
  digitalWrite(13, LOW);    
  delay(300);   
    
   // 3 clipiri scurte din nou
  digitalWrite(13, HIGH); // aprinde LED-ul 
  delay(500); // așteaptă jumătate de secundă
  digitalWrite(13, LOW); // stinge LED-ul prin scăderea tensiunii
  delay(300); 
  digitalWrite(13, HIGH);   
  delay(500);              
  digitalWrite(13, LOW);    
  delay(300); 
  digitalWrite(13, HIGH);   
  delay(500);              
  digitalWrite(13, LOW);    
  delay(3000); // pauză finală de 3 secunde
}