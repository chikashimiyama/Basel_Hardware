#include <wiringPi.h>
#include <softTone.h>
#define SPEAKER 11

int main(void){
	wiringPiSetup ();
	softToneCreate (SPEAKER) ;
	softToneWrite (SPEAKER, 440);
	for(;;){
		softToneWrite(SPEAKER, 440);
		delay(300);
		softToneWrite(SPEAKER, 880);
		delay(300);
	}
	return 0;
}
