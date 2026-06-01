#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

#define SOIL_PIN A0
#define LDR_PIN A1

#define PUMP_RELAY_PIN 7
#define FAN_RELAY_PIN 8

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

int soilThreshold = 600;

void setup() {
  Serial.begin(9600);

  pinMode(PUMP_RELAY_PIN, OUTPUT);
  pinMode(FAN_RELAY_PIN, OUTPUT);

  digitalWrite(PUMP_RELAY_PIN, HIGH); // pump OFF
  digitalWrite(FAN_RELAY_PIN, HIGH);   // fan OFF

  dht.begin();
  lcd.init();
  lcd.backlight();
}

void loop() {

  // 🌱 Sensors
  int soil = analogRead(SOIL_PIN);
  int light = analogRead(LDR_PIN);

  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    temp = 0;
    hum = 0;
  }

  // 💧 PUMP CONTROL
  if (soil > soilThreshold) {
    digitalWrite(PUMP_RELAY_PIN, LOW);   // ON
  } else {
    digitalWrite(PUMP_RELAY_PIN, HIGH);  // OFF
  }

  // 🌀 FAN CONTROL (TEMP > 25°C)
  if (temp > 30) {
    digitalWrite(FAN_RELAY_PIN, LOW);   // ON
  } else {
    digitalWrite(FAN_RELAY_PIN, HIGH);  // OFF
  }

  // 📺 LCD DISPLAY
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temp);
  lcd.print(" H:");
  lcd.print(hum);

  lcd.setCursor(0, 1);
  lcd.print("S:");
  lcd.print(soil);
  lcd.print(" L:");
  lcd.print(light);

  // 🖥 SERIAL DEBUG
  Serial.print("Soil: ");
  Serial.print(soil);
  Serial.print(" | Temp: ");
  Serial.print(temp);
  Serial.print(" | Hum: ");
  Serial.print(hum);
  Serial.print(" | Light: ");
  Serial.println(light);

  delay(2000);
} i want to present this code