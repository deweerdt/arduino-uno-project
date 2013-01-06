#include "Arduino.h"

const int pin = 13;

void setup(void)
{
	pinMode(pin, OUTPUT);
}

void loop(void)
{
	digitalWrite(pin, HIGH);
	delay(100);
	digitalWrite(pin, LOW);
	delay(100);
}

int main(void)
{
	init();

	setup();

	for (;;) {
		loop();
	}

	return 0;
}
