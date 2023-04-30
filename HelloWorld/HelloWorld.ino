// Define the analog pin for the MQ-2 sensor
int mq2_analog_pin = A0;

void setup() {
  // Start the serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the MQ-2 sensor
  int mq2_analog_value = analogRead(mq2_analog_pin);

  // Convert the analog value to voltage (in millivolts)
  float mq2_voltage = mq2_analog_value * (5000.0 / 1024.0);

  // Calculate the gas concentration in parts per million (ppm)
  float mq2_ppm = (mq2_voltage / 1000.0) * 10.0;

  // Print the gas concentration to the serial monitor
  Serial.print("MQ-2 Gas Concentration (PPM): ");
  Serial.println(mq2_ppm);

  // Delay for 1 second before taking the next reading
  delay(1000);
}
