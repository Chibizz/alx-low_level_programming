#include <unistd.h>


/**
 * main - write to stdout
 *
 * Return should be 1 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Doraa korpar, 2015-10-19\n",59);
	return (1);
}
