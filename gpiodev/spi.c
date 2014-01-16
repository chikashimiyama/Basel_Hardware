#include <wiringPi.h>
#include <wiringPiSPI.h>
#include <stdio.h>
#include <unistd.h>

int main(void){
	int spiCh = 1;
	unsigned char data[2];
	int spi = wiringPiSPISetup(spiCh, 500000);

	wiringPiSetup();
	pinMode(12, OUTPUT);
	digitalWrite(12, HIGH);
	if(spi == -1){
		printf("cannot initialize\n");
		return 1;
	}
	
	for(;;){
		int res;
		unsigned char value;
		digitalWrite(12, LOW);
		res = wiringPiSPIDataRW(spiCh, data, 2);
		digitalWrite(12, HIGH);

		value = (data[0] << 2) + (data[1] >> 6);
		printf("data:%d\n", value);
		usleep(10000);
	}
	return 0;
}


