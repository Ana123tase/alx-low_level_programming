#include <unitd.h>
/**this is my _puthar
 * it writes character c to stout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
