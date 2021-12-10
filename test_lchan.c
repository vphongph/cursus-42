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
	(void)d;


	if (!s)
		return (NULL);
	chr = (char *)s;
	i = 0;
	while (i < n)
	{
		if (chr[i] == d)
			return (&chr[i]);
		i++;
	}
	return (NULL);
}


void    *ft_memchr_lchan(const void *s, int c, size_t n)
{

	printf("lch c %d\n", c);

    char    *chr;

	printf("lch casted signed c %d\n", (char)c);

    chr = (char *) s;
    while (c > 128)
        c = c % 128;

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

	printf("vph c %d\n", c);

	printf("vph casted unsigned c %d\n", (unsigned char)c);


	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)s)[i] == (unsigned char)c)
		{
			printf("FIND %d\n", c);
			printf("vph value int * s %lu\n", ((const unsigned long *)s)[i]);
			printf("vph value char * s %d\n", ((const unsigned char *)s)[i]);
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


	// char * mine = NULL;
	// char * real = NULL;
	char * lchan = NULL;

	const void *s;
	int c;
	size_t n;

	s = "kdjhfksjdhlkjsdhflk~";
	// c = 0xFFFF;
	c = 126;
	// c = 0xFE;
	n = 21;

	// lchan = ft_memchr_lchan(s,c,n);

	// real = memchr(s,c,n);
	// mine = ft_memchr_vph(s,c,n);

	// printf("Mine  %p\n" , mine);

	// printf("Real  %p\n" , real);

	uint64_t i = 0;

	while (i < 0xFFFFFF * 2)
	{
		lchan = ft_memchr_lchan_v1_1(s,c,n);
		i++;
	}

	printf("Lchan %p\n" , lchan);

	return (0);
}