#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write(1m &str[i++], 1);
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_captalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
