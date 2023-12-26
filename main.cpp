#define ALTITUDE_MAX 1000
#define SPEED_MAX 500
#define BATT_VOLTAGE_MAX 4.4

void setup() {
  Serial.begin(9600);
}

void loop() {

  float altitude = random(0, ALTITUDE_MAX + 1);
  float speed = random(0, SPEED_MAX + 1);
  float battVoltage = random(0, (BATT_VOLTAGE_MAX + 1) * 1000) / 1000.0;
  float gyro = random(1000,3000);
  float acc = random(1000,3000);

  // Print data over serial
  Serial.print("Altitude: ");
  Serial.print(altitude);
  Serial.print("m\tSpeed: ");
  Serial.print(speed);
  Serial.print("m/s\tBattery Voltage: ");
  Serial.print(battVoltage);
  Serial.print("V\tGyro: ");
  Serial.print(gyro);
  Serial.print(" rad/s\tAccel: ");
  Serial.print(acc);
  Serial.println(" m/s^2");

  delay(100);
}
