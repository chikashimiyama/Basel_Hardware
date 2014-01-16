#include <wiringPi.h>
#define LED 11

int main (void)
{
    wiringPiSetup () ;
    pinMode (LED, OUTPUT) ;

    for (;;)
    {
        digitalWrite (LED, HIGH) ;  // On
        delay (200) ;       // mS
        digitalWrite (LED, LOW) ;   // Off
        delay (200) ;
     }
  return 0 ;
}
