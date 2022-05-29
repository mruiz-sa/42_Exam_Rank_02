
#include <stdlib.h>

int	absolute_value(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

int	*ft_range(int start, int end)
{
	int	size;
	int	*ret;
	int	i;

	i = 0;
	size = absolute_value(end - start) + 1;
	ret = (int *)malloc(sizeof(int) * size);
	if (ret)
	{
		while (start <= end)
		{
			ret[i] = start;
			i++;
			start++;
		}
		return (ret);
	}
	return (NULL);
}
