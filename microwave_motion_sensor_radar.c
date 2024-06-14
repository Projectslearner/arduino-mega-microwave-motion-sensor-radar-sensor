/*
    Project name : Microwave Motion Sensor RADAR sensor
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-microwave-motion-sensor-radar-sensor
*/

const int radarSensorPin = 2; // Digital pin connected to the RADAR sensor module
int motionDetected = 0; // Variable to store motion detection status

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(radarSensorPin, INPUT); // Set RADAR sensor pin as INPUT
}

void loop() {
  // Read the motion detection state from the RADAR sensor
  motionDetected = digitalRead(radarSensorPin);

  // Print the motion detection status to the Serial Monitor
  if (motionDetected == HIGH) {
    Serial.println("Motion detected!");
  } else {
    Serial.println("No motion detected");
  }

  delay(1000); // Add a small delay before the next reading
}
