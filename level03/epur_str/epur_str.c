#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			else if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t')
				{
					write(1, " ", 1);
					while (argv[1][i] == ' ' || argv[1][i] == '\t')
						i++;
				}
				else if (argv[1][i + 1] == '\0')
					break;
				else
				{
					write(1, " ", 1);
					i++;
				}
			}
		}
	}	
	write(1, "\n", 1);
	return (0);
}
