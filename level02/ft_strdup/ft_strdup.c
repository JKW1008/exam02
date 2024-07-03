#include <stdlib.h>

char *ft_strdup(char *src)
{
	int len = 0;
	char *str;
	char *result;
	while (src[len])
		len++;
	str = (char *)malloc((len +1) * sizeof(char));
	if (!result)
		return (NULL);
	result = str;
	while (*src)
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';
	return (result);
}
