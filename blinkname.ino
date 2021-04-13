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

// The loop() method is called frequently.
void loop() {
    //F ..-.
	digitalWrite(MY_LED, HIGH);do
	delay(250);
	digitalWrite(MY_LED, LOW);
	delay(250);
	
	digitalWrite(MY_LED, HIGH);
	delay(250);
	digitalWrite(MY_LED, LOW);
	delay(250);
	
	digitalWrite(MY_LED, HIGH);
	delay(750);
	digitalWrite(MY_LED, LOW);
	delay(250);
	
	digitalWrite(MY_LED, HIGH);
	delay(250);
	digitalWrite(MY_LED, LOW);
	//1 seconds intervals, so client can know current letter is donw
	delay(1000);
	
	//E .
	digitalWrite(MY_LED, HIGH);
	delay(250);
	digitalWrite(MY_LED, LOW);
	//1 seconds intervals, so client can know current letter is donw
	delay(1000);
	
	// I ..
	digitalWrite(MY_LED, HIGH);
	delay(250);
	digitalWrite(MY_LED, LOW);
	delay(250);
	
	digitalWrite(MY_LED, HIGH);
	delay(250);
	digitalWrite(MY_LED, LOW);
	//3 seconds intervals, so client can know one word is donw
	delay(3000);
	// And repeat!
}
