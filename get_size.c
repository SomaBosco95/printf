#include "main.h"

/**
 * get_size - Determines the size of the argument to cast
 *
 * @format: Formatted string
 * @i: List of arguments to be printed.
 *
 * Return: The size to cast the argument to.
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
		else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
		else
		*i = curr_i;

	return (size);
}