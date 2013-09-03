#include "md2.h"

void setup() {
	Serial.begin(9600);
}

void loop() {
	char hash[33];
	do_md2("The quick brown fox jumps over the lazy dog", hash);
	Serial.println(hash);
	delay(5000);  
}

