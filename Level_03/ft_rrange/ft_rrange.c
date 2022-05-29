
#include <stdlib.h>

int	absolute_value(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

int	*ft_rrange(int start, int end)
{
	int	size;
	int	*array;
	int	i;

	i = 0;
	size = absolute_value(end - start) + 1;
	array = malloc(sizeof(int) * size);
	if (array)
	{
		while (end >= start)
		{
			array[i] = end;
			i++;
			end--;
		}
		return (array);
	}
	return (NULL);
}
