/*
1's and 0's on Monitor.
*/
int button = 7;
int x;

void setup() {
    Serial.begin(9600);
    pinMode(button, INPUT);
}

void loop() {
    x = digitalRead(button);
    Serial.println(x);
    delay(100);
}
