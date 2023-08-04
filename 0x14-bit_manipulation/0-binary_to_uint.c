#include "main.h"

/**
* binary_to_uint - Function to transform a binary number into an unsigned integer.
*
* @b: A string holding the binary number.
*
* Returns: The converted unsigned integer.
*/

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dec_val = 0;

if (!b)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec_val = 2 * dec_val + (b[i] - '0');
}

return (dec_val);
}
