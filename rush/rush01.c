#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{	
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1 ) || (y == i && x == j && y != 1 && x != 1))
				ft_putchar(47 );
			else if ((x == j && 1 == i) || (y == i && 1 == j))
				ft_putchar(92 );
			else if ((i == 1 && j > 1 && j < x) || (i == y && j > 1 && j < x))
				ft_putchar(42 );
			else if ((j == 1 && i > 1 && i < y) || (j == x && i > 1 && i < y))
				ft_putchar(42 );
			else
				ft_putchar(32 );
			j++;
		}
		i++;
		ft_putchar(10 );
	}
}
