#include <msp430.h>
main()
{
P1DIR = 1;// set P1.0 as output
P1OUT = 1;// make P1.0 go logic HIGH
// Initialize Timer-A; SMCLK; no division, continuous mode

while(1) 
{
while(TAIFG=0/* TAIFG bit is 0 */)
;
// clear TAIFG bit (ie, make it 0)
// Toggle LED on P1.0
}
}
