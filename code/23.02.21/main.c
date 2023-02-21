

#include <avr/io.h>
#include "ap/StandLight/StandLight.h"

int main(void)
{
	StandLight_init();
	
    while (1) 
    {
		StandLight_excute();
    }
}

