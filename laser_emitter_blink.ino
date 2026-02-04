int signal_pin = 7;

void setup() {
  // put your setup code here, to run once:
pinMode(signal_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(signal_pin,HIGH);
delay(1000);
digitalWrite(signal_pin,LOW);
delay(1000);
}
