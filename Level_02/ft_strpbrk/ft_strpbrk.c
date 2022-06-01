#include<string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (s1[i])
	{
		while (s2[c])
		{
			if (s1[i] == s2[c])
				return ((char *)&s1[i]);
			c++;
		}
		c = 0;
		i++;
	}
	return (NULL);
}
