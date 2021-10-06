#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_is_negative(int i)
{
	char	n;
	char	p;

	n = 'N' ;
	p = 'P' ;
	if (i < 0)
	{
		ft_putchar(n);
	}
	else
		ft_putchar(p);
}
