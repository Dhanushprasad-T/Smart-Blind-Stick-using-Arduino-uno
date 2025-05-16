#define trigPin 9
#define echoPin 10
#define waterSensor A0
#define vibrationMotor 11
#define buzzer 12  // Optional

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(vibrationMotor, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duration;
  int distance;
  int waterValue;

  // --- Ultrasonic Sensor ---
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // --- Water Sensor ---
  waterValue = analogRead(waterSensor);  // Higher means more water
  Serial.print("Distance (cm): ");
  Serial.print(distance);
  Serial.print(" | Water Value: ");
  Serial.println(waterValue);

  // --- Alert Logic ---
  bool obstacleDetected = distance < 50;
  bool waterDetected = waterValue > 500;  // Adjust threshold as needed

  if (obstacleDetected || waterDetected) {
    digitalWrite(vibrationMotor, HIGH);
    digitalWrite(buzzer, HIGH);  // Optional
  } else {
    digitalWrite(vibrationMotor, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(200);
}