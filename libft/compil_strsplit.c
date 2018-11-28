#include <stdio.h>


size_t countword(char const *s, char c);

int main(int argc, char const *argv[])
{
	char *str = "   .";
	printf("nombre = %zu\n", countword(str, 32));
	return 0;
}