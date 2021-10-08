#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	h;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		h = tab[i];
		tab[i] = tab[j];
		tab[j] = h;
		i++;
		j--;
	}
}
