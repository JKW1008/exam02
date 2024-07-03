#include <unistd.h>

int	has_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

void inter(char *s1, char *s2)
{
	char printed[128] = {0};
	int i = 0;
	while (*s1)
	{
		if (has_char(s2, *s1) && !has_char(printed, *s1))
		{
			write(1, s1, 1);
			printed[i] = *s1;
			i++;
		}
		s1++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);	
	write(1, "\n", 1);
}
