const int analogInPin = A0;
int sensorValue = 0;
const int buzzerpin =10;

void setup() {
  // declare pin  to be an output:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(buzzerpin, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  sensorValue = analogRead(analogInPin);
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\n");
  delay(2);
  // conditionals untuk determine kalau lebih dari interval atau kurang dari interval lalu execute
  if((sensorValue>=100)&&(sensorValue<=420)){
    digitalWrite(2,HIGH);
    delay(100);
    }
  else if((sensorValue>=421)&&(sensorValue<=500)){
   digitalWrite(3,HIGH);
   delay(100);
    }  
  else if((sensorValue>=501)&&(sensorValue<=700)){
    digitalWrite(4,HIGH);
    tone(buzzerpin, 100);
    delay(100);
    }
  else{
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    delay(100);
    noTone(buzzerpin);
    }
}
