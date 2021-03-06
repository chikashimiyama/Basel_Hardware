##Commands for Xbee

#### +++
Just send a ping to the connected Xbee. Xbee returns "OK" if its connected.

#### ATRE
factory reset

#### ATWR
Save setting

#### ATMY
OWN address

#### ATIC
detect digital change and send packet

#### ATID
get/set PAN(Personal Area Network) ID
Only modules with matching PAN IDs can communicate with each other.

#### ATIR
get/set sampling rate of ADC
0 = disabled
10 = every 10 msec.
less than 20 not recommended

#### ATBD
get/set baudrate (speed of communication)

0 - 7 (standard baud rates)
* 0 = 1200 bps
* 1 = 2400
* 2 = 4800
* 3 = 9600
* 4 = 19200
* 5 = 38400
* 6 = 57600
* 7 = 115200

#### ATAP
get/set API operation

* 0. AT
* 1. API
* 2. API (escape mode)

#### ATD0, ATD1, ATD2, ATD3, ATD4, ATD5, ATD6, ATD7
get/set PIN

##### D0-D4
* 0. Disabled
* 1. n/a
* 2. ADC
* 3. DI
* 4. DO low
* 5. DO high

##### D5
* 0. Disabled
* 1. Associated indicator
* 2. ADC
* 3. DI
* 4. DO low
* 5. DO high

##### D6
* 0. Disabled
* 1. RTS flow control
* 2. (n/a)
* 3. DI
* 4. DO low
* 5. DO high

##### D7
* 0. Disabled
* 1. CTS Flow Control
* 2. (n/a)
* 3. DI
* 4. DO low
* 5. DO high
* 6. RS485 Tx Enable Low
* 7. RS485 Tx Enable High
 
##### D8
* 0. Disabled
* 3. DI
(1,2,4 & 5 n/a)

#### ATMM
Mac mode
* 0 Digi header 
* 1 802.15
* 2 802.15 (no ACK)
* 3 Digi header (no ACK)


#### ATHV
get hardware version
