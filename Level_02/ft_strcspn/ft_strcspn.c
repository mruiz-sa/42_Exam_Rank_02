
#include<string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		n = 0;
		while (reject[n] != '\0')
		{
			if (s[i] == reject[n])
				return (i);
			n++;
		}
		i++;
	}
	i = 0;
	while (s[i])
		i++;
	return (i);
}
