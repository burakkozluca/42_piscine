#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a;
	int	b;

	if (*b != 0)
	{
		a = *a / *b;
		b = *a % *b;
	}
}

int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 10;
	ft_ultimate_div_mod(&x, &y);
	printf("a: %d, b: %d", x, y);
}
