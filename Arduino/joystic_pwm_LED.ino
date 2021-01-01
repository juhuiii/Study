// Joystick PWM LED 

int LED=11;            // GPIO 11번 핀 LED 연결 

void setup() {
Serial.begin(9600); 
pinMode(LED,OUTPUT);  // 직렬통신 열기 
}

void loop() {
int X = analogRead(A0); // X좌표를 나타내는 값 읽기 (0~1023)
int Y = analogRead(A1); // Y좌표를 나타내는 값 읽기 
analogWrite(LED,X/4);   // 0~255  PWM  출력 

Serial.print(X);
Serial.print(" ");
Serial.println(Y);     // 줄바꿈 

delay(10); 

}
