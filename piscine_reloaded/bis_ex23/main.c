#include <stdio.h>
#include "ft_point.h"

void	set_point (t_point *xd)
{
	xd->x = 42;
	xd->y = 21;
}
int		main(void)
{
	t_point haha;
	printf("x = %d\ny = %d\n", haha.x, haha.y);
	set_point(&haha);
	printf("x = %d\ny = %d\n", haha.x, haha.y);
	return (0);
}
