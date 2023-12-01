const int m1p1 = 2;
const int m1p2 = 3;
const int m2p1 = 4;
const int m2p2 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(m1p1, OUTPUT);
  pinMode(m1p2, OUTPUT);
  pinMode(m2p1, OUTPUT);
  pinMode(m2p2, OUTPUT);

  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(9, 25);  // ENA pin, motor 1 speed
  analogWrite(10, 25);

  // p1 LOW & pin2 HIGH -> forward
  // p1 LOW & pin2 HIGH -> forward

  digitalWrite(m1p1, LOW);
  digitalWrite(m1p2, HIGH);
  
  digitalWrite(m2p1, LOW);
  digitalWrite(m2p2, HIGH);

  // distance sensing code goes here
}
