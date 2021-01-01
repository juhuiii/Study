
int analog_in = A0;   // adc read port
int pwm_out = 5;      // pwm output 

void setup() {
    Serial.begin(9600);
    pinMode(analog_in, INPUT);
    pinMode(pwm_out, OUTPUT);
}

void loop() {

      int adc_value = analogRead(analog_in);    // 0~ 1023
      int pwm_value = adc_value/4;              // 0 ~ 255
      delay(100);
      
      analogWrite(pwm_out, pwm_value);

      Serial.println(adc_value);
      
}
