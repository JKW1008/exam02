#include <unistd.h>

int ft_atoi(char *s)
{
	int result = 0;
	while (*s)
	{	
		result = result * 10 + *s - '0';
		s++;
	}
	return (result);
}

void put_char(char c)
{
	write(1, &c, 1);
}

void put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	put_char(n % 10 + '0');
}

int main(int argc, char **argv)
{
	int n;
	int i = 1;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		while (i <= 9)
		{
			put_nbr(i);
			write(1, " x ", 3);
			put_nbr(n);
			write(1, " = ", 3);
			put_nbr(i * n);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
