#define OPENVELO_VERSION "0.1.0"

void setup() {
  Serial.begin(115200);

  while (!Serial) {
    delay(10);
  }

  delay(500);

  Serial.println();
  Serial.println("=================================");
  Serial.println("OpenVelo firmware");
  Serial.print("Version: ");
  Serial.println(OPENVELO_VERSION);
  Serial.println("System boot OK");
  Serial.println("=================================");
}

void loop() {
  Serial.println("OpenVelo running...");
  delay(2000);
}