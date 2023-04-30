int soilMoistureSensor =A0;
int soilMoistureValue=0;
void setup(){
  Serial.begin(9600);
}

void loop(){
  soilMoistureValue =analogRead(soilMoistureSensor);
  Serial.print("Soil Moisture Value:");
  Serial.println(soilMoistureValue);
  delay(1000);
}
