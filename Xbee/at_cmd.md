##Commands for Xbee

#### +++
Just send a ping to the connected Xbee. Xbee returns "OK" if its connected.

#### ATID
get/set PAN(Personal Area Network) ID
Only modules with matching PAN IDs can communicate with each other.

#### ATMY
get/set network address

#### ATIR
get/set sampling rate of ADC
0 = disabled
10 = every 10 msec.

#### ATD0, ATD1, ATD2, ATD3, ATD4
set PIN
Parameter Configuration
0 Disabled
1 n/a
2 ADC
3 DI
4 DO low
5 DO high

#### ATHV
get hardware version

#### ATBD
get/set baudrate (speed of communication)

0 - 7 (standard baud rates)
0 = 1200 bps
1 = 2400
2 = 4800
3 = 9600
4 = 19200
5 = 38400
6 = 57600
7 = 115200

#### ATAP
get/set API operation

0 = AT
1 = API

