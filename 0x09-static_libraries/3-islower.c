#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - prints lowercase characters
 * @c: the character to be checked
 *
 * Return: the character
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}