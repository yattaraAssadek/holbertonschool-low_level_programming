#include "main.h"
/**
 * print_alhabet - function that pirnt alphabet
 * it prints in lowercase
 * Return: no return
 */
void print_aphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar (10);
}
