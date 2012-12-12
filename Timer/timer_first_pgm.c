#include<msp430.h>
#define RED_LED BIT0
#define TOGGLE (P1OUT ^= RED_LED)
main()
{
unsigned int a,speed;
P1DIR = 1;
P1OUT = 1;
TACTL = 0x0220;
//0000 0010 0010 0000
while(1)
	{
	speed=3;
	for (a=0; a<=speed;a++)
		{
		while(TACTL <= 0x0220)
			{
			}
		TACTL = 0x0220;
		}
	TOGGLE;
	}
}
