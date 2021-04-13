// We define MY_LED to be the LED that we want to blink. 
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It 
// allows your code to run before the cloud is connected. In this case, 
// it will begin blinking almost immediately instead of waiting until 
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup() {
	// In order to set a pin, you must tell Device OS that the pin is 
	// an OUTPUT pin. This is often done from setup() since you only need 
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}

void dot(){
    digitalWrite(MY_LED, HIGH);
	delay(250);
	digitalWrite(MY_LED, LOW);
	delay(250);
}
void line(){
    digitalWrite(MY_LED, HIGH);
	delay(750);
	digitalWrite(MY_LED, LOW);
	delay(250);
}
void _F(){
    //F ..-.
    dot();
    dot();
    line();
    dot();
    //1 seconds intervals
    delay(750);
}
void _E(){
    //E .
    dot();
    //1 seconds intervals
    delay(750);
}
void _I(){
    // I ..
    dot();
    dot();
    //1 seconds intervals
    delay(750);
}
// The loop() method is called frequently.
void loop() {
    _F();
    _E();
    _I();
    delay(2000);
	// And repeat!
}



