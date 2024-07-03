#include <unistd.h>

int	has_char(char *s1, char c)
{
	while (*s1)
	{
		if (*s1 == c)
			return (1);
		s1++;
	}
	return (0);
}

void unionstr(char *s1, char *s2)
{
	char pri[256] = {0};
	int i = 0;

	while (*s1)
	{
		if (!has_char(pri, *s1))
		{
			pri[i] = *s1;
			write(1, s1, 1);
			i++;
		}
		s1++;
	}
	while (*s2)
	{
		if (!has_char(pri, *s2))
		{
			pri[i] = *s2;
			write(1, s2, 1);
			i++;
		}
		s2++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		unionstr(argv[1], argv[2]);	
	write(1, "\n", 1);
	return (0);
}
