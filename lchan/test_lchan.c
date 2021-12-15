#include <unistd.h>
#include <stdio.h>
#include <assert.h>
#include <stddef.h>
#include <string.h>


void	*ft_memchr_lchan_v1_1(const void *s, int c, size_t n)
{
	size_t	i;
	char	*chr;

	unsigned char d = (unsigned char)c;


	printf("\nto find     INT         %x\n", d);
	printf("to find     CHAR        %x\n", (char)d);
	printf("to find     UNCHAR      %x\n", (unsigned)d);
	printf("to find     CHAR -1     %d\n", (char)-128);
	printf("to find     UNCHAR -1   %d\n", (unsigned char)255);

	char lol = -1;
	unsigned char mdr = 255;
	unsigned int xD = 4294967295;


	assert(lol == xD);

	if (!s)
		return (NULL);
	chr = (char *)s;
	i = 0;
	while (i < n)
	{
		// printf("\nto find cast         %x\n", d);
		// printf("address              %p\n", chr + i);
		// printf("interpreted signed   %x\n", (char)chr[i]);
		// printf("interpreted unsigned %x\n", (unsigned char)chr[i]);

		if (chr[i] == d)
			return (&chr[i]);
		i++;
	}
	return (NULL);
}

// void	*ft_memchr_lchan_v1_1(const void *s, int c, size_t n)
// {
// 	size_t	i;
// 	char	*chr;

// 	if (!s)
// 		return (NULL);
// 	chr = (char *)s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (chr[i] == (char)c)
// 			return (&chr[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

void    *ft_memchr_lchan(const void *s, int c, size_t n)
{

	printf("lch c %d\n", c);

    char    *chr;

	printf("lch casted signed c %d\n", (char)c);

    chr = (char *) s;
    // while (c > 128)
        // c = c % 128;

	printf("second lch c %d\n", c);

    while (n-- > 0)
    {
        if (*chr == c)
        {
			printf("FIND %d\n", c);
            return (chr);
        }
        chr++;
        // printf(" ou est mon chr %p\n", chr);
        // sleep(1);
    }
    return (NULL);
}

void	*ft_memchr_vph(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)s)[i] == (unsigned char)c)
		{
			return (&((unsigned char *)s)[i]);
		}
		i++;
		// printf("%p\n", (s + i));

	}
	return (NULL);
}


// void    *ft_memchr_lchan(const void *s, int c, size_t n)
// {
// 	char *chr = s;
// 	while (c > 128)
// 		c = c % 128;
// 	while (n-- > 0)
// 	{
// 		if (*chr == c)
// 		{
// 			return (chr);
// 		}
// 		chr++;
// 	}
// 	return (NULL);
// }

int main(void)
{	


	char * mine = NULL;
	char * real = NULL;
	char * lchan_bad = NULL;
	char * lchan_good = NULL;

	const void *s;
	int c;
	size_t n;

	s = "kdjhfksjdhlkjsdhflk~";
	// c = 0xFFFF;
	c = 128;
	// c = 0xFE;
	n = 4500;

	lchan_bad = ft_memchr_lchan(s,c,n);
	lchan_good = ft_memchr_lchan_v1_1(s,c,n);

	real = memchr(s,c,n);
	mine = ft_memchr_vph(s,c,n);

	printf("\nMine       %p\n" , mine);
	printf("Real       %p\n" , real);
	printf("Lchan bad  %p\n" , lchan_bad);
	printf("Lchan good %p\n" , lchan_good);

	return (0);
}