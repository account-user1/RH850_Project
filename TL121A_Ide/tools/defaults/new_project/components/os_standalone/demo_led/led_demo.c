#include "parts_leds.h"
#include "parts_timer.h"
#include "parts_switch.h"

/* Displays the least significant bits of the number by
 * lighting LEDs on the board */
static void displayOnLEDs(const int number)
{
    int mask = 0x1;
    int bit = 0;
    for (; bit < pl_getLEDCount(LED_COLOR_ANY); bit++) {
	/* Determine if the bit is set. */
	if ((number & mask) != 0)
	    /* Turn on the corresponding LED. */
	    pl_setLED(bit, PARTS_LEDS_STATE_ON);
	else
	    /* Turn off the corresponding LED. */
	    pl_setLED(bit, PARTS_LEDS_STATE_OFF);
	/* Increment the mask for the next bit */
	mask = mask << 1;
    }
}

/* Slowly turns on the LEDs to display the least significant
 * bits of the number.  Fading up will take time*time
 * calls to displayOnLEDs(). */
static void fadeOnLEDs(const int number, const int time)
{
    int i, j, c;
    c = time;
    for (i=0;i<c;i++) {
	for (j=0;j<i;j++)
	    displayOnLEDs(number);
	for (j=i;j<c;j++)
	    displayOnLEDs(0);
    }
}

/* Slowly turns off the LEDs displaying the least significant
 * bits of the number.  Fading off will take time*time
 * calls to displayOnLEDs(). */
static void fadeOffLEDs(const int number, const int time)
{
    int i, j, c;
    c = time;
    for (i=0;i<c;i++) {
	for (j=0;j<i;j++)
	    displayOnLEDs(0);
	for (j=i;j<c;j++)
	    displayOnLEDs(number);
    }
}
int main(int argc, char **argv, char **envp)
{
    int i, j;
    int mode;
    for (i=0;; i++) {
	mode = ps_getMode()%6;
	switch (mode) {
	    case 0:
		/* binary counter */
		displayOnLEDs(i);
		pt_sleep(500);
		break;
	    case 1:
		/* running lights */
		displayOnLEDs(1 << i%pl_getLEDCount(LED_COLOR_ANY));
		pt_sleep(500);
		break;
	    case 2:
		/* fade up and down */
		if (i%2)
		    fadeOnLEDs(~0, 200);
		else
		    fadeOffLEDs(~0, 200);
		break;
	    case 3:
		/* flicker all leds */
		for (j=0;j<10;j++) {
		    displayOnLEDs(~0);
		    pt_sleep(25);
		    displayOnLEDs(0);
		    pt_sleep(25);
		}
		break;
	    case 4:
		/* fading binary counter */
		fadeOnLEDs(i, 150);
		fadeOffLEDs(i, 150);
		break;
	    case 5:
		/* fading running lights*/
		fadeOnLEDs(1 << i%pl_getLEDCount(LED_COLOR_ANY), 150);
		fadeOffLEDs(1 << i%pl_getLEDCount(LED_COLOR_ANY), 150);
		break;
	}
    }
}
