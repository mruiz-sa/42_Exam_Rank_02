#include <stdio.h>
#include <stdlib.h>

void	do_op(char *nb1, char *op, char *nb2)
{
	int	n1;
	int	n2;
	int	r;

	n1 = atoi(nb1);
	n2 = atoi(nb2);
	r = 0;
	if (op[0] == '+')
		r = n1 + n2;
	else if (op[0] == '-')
		r = n1 - n2;
	else if (op[0] == '*')
		r = n1 * n2;
	else if (op[0] == '/')
		r = n1 / n2;
	else if (op[0] == '%')
		r = n1 % n2;
	printf("%d\n", r);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	else
		printf("\n");
	return (0);
}
