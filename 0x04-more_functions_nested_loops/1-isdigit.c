#include "main.h"

/**
*_isdigit - cheks if a character is a digit
*@c: character to be tested
*Return: 1 for a character that will be a digit, 0 otherwise
*/

int _isdigit(int c)
{

if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
