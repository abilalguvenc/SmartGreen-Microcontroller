#define LED1 D0             // Led in NodeMCU at pin GPIO16 (D0).
#define LED2 D1
#define ALERT1 D2
#define ALERT2 D3

void setup() {
  pinMode(LED1, OUTPUT);    // LED pin as output.
  pinMode(LED2, OUTPUT);    // LED pin as output.
  pinMode(ALERT1, INPUT);
  pinMode(ALERT2, INPUT);
}

void loop() {
  if (digitalRead(ALERT1) == LOW)
    digitalWrite(LED2, LOW);
  else
    digitalWrite(LED2,HIGH);
    
  digitalWrite(LED1, HIGH);
  //digitalWrite(LED2, LOW);
  delay(1000);
  
  digitalWrite(LED1, LOW);
  //digitalWrite(LED2, HIGH);
  delay(1000);
}
