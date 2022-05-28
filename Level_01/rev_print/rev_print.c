
#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*rev_print(char *str)
{
	int		len;
	int		i;
	char	tmp;
	int		z;

	len = ft_strlen(str);
	i = 0;
	z = 0;
	len--;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		len--;
		i++;
	}
	while (str[z])
	{
		write (1, &str[z], 1);
		z++;
	}
	return (0);
}
