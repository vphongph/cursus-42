#include <stdio.h>
#include <unistd.h>

int		main()
{
int nu =  1088;
char c = 64;

write(1, &nu, 1);
write(1, &c, 1);

return (0);
}
