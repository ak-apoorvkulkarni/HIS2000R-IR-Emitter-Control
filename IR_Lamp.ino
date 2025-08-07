/*
 * Author: Apoorv Kulkarni
 * GitHub: https://github.com/ak-apoorvkulkarni
 * Website: https://ak-apoorvkulkarni.github.io/
 * Project: HIS2000R TO-8 IR Emitter Control
 * Description: Arduino sketch for controlling HIS2000R-A300-9 thermal infrared emitter
 *             via PWM. Supports ON/OFF commands and PWM duty cycle control (0-100%)
 *             Uses pin 9 for PWM output to drive the IR emitter
 */

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);  // PWM Pin for IR emitter control
  digitalWrite(9, LOW); // Initialize emitter to OFF state
}

void loop() {
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();

    // Command: ON - Turn IR emitter to full power
    if (cmd == "ON") analogWrite(9, 255);
    // Command: OFF - Turn IR emitter off
    else if (cmd == "OFF") analogWrite(9, 0);
    // Command: PWM_X - Set PWM duty cycle (0-100%)
    else if (cmd.startsWith("PWM_")) {
      int duty = cmd.substring(4).toInt();
      duty = map(duty, 0, 100, 0, 255); // Map percentage to PWM range
      analogWrite(9, duty);
    }
  }
}
