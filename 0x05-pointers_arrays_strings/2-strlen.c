#include "main.h"
/**
 * _strlen -- Finds tge lenght of a string
 * @s : String pointer to tye string whose lenght is to be found
 * Return : return the lenght of tge string
*/
int _strlen(char *s)
{
	int p = 0;
	/**
	 * increment up to when tge last char is null, \0
	*/ 
	while (*(s + p) != 0)
	{
	p++;
	}
	return (p);
}
