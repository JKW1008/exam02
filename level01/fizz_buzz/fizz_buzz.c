#include <unistd.h>

void	writenum(int number)
{
	char str[10] = "0123456789";

	if (number > 9)
		writenum(number / 10);
	write(1, &str[number % 10], 1);
}

int	main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			write(1, "fizz", 5);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else
			writenum(i);
		i++;
		write(1, "\n", 1);
	}
}
