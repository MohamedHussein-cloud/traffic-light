int red = 10; 
int yellow = 12; 
int green = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop() {
  digitalWrite(red, HIGH);  
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(3000);           
  
  digitalWrite(red, LOW);   
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  delay(1500);  
  
 
 digitalWrite(red, LOW); 
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(3000);  
}
