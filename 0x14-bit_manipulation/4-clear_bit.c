#include "main.h"
/**
* clear_bit - the value of a given bit is set to 0
* @n: it is a pointer to the number to change
* @index: the index of the bit to clear
*
* Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
