#include <stdio.h>
#include "ft_point.h"

void	set_point (t_point xd)
{
	xd.x = 3;
	xd.y = 21;
}
int		main(void)
{
	t_point t_point;
	printf("x = %d\ny = %d\n", t_point.x, t_point.y);
	set_point(t_point);
	printf("x = %d\ny = %d\n", t_point.x, t_point.y);
	return (0);
}
