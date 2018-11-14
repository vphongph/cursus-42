#include "ft_abs.h"
#include <stdio.h>

int		main(void)
{
	long int i;

	i = -2147483648;

	printf(" ");
	printf("%d\n", ABS(-'c'));
	printf("%ld\n", ABS(-2147483648));
	return (0);
}