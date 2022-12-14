#include "main.h"

/**
 * _islower - checks if a character is lowercase if YES it returns 1
 * returns 0 not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
