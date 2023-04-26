#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic charecter.
 * @c: the charecter to be checked
 * Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
