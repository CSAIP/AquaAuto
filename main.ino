
int sensorPin = A0;  
int sensorValue = 0;  
int percent = 0;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);

}

void loop() {
  
  sensorValue = analogRead(sensorPin);
  percent = convertToPercent(sensorValue);



  if (percent < 20 ) {
      digitalWrite(12, HIGH);   
      delay(1000);              
      digitalWrite(12, LOW);   
      delay(1000);
    }


  
  printValues();
  delay(500);

 
}

int convertToPercent(int value)
{
  int percentValue = 0;
  percentValue = map(value, 1023, 465, 0, 100);
  return percentValue;
}

void printValues()
{
//  Serial.print("\n\nAnalog Value: ");
//  Serial.print(sensorValue);
//  Serial.print("\nPercent: ");
//  Serial.print(percent);
//  Serial.print("%\n");

//  Serial.print(100);
//  Serial.print(" ");
//  Serial.print(0);
//  Serial.print(" "); 
  Serial.println(percent);
}
