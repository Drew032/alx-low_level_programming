#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be printed.
 *
 * Return: On success, the function returns 1.
 * On error, -1 is returned, and errno is set to an appropriate error code.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
