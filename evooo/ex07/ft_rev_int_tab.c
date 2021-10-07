#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	h;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		h = *tab[i];
		*tab[i] = tab[j];
		*tab[j] = h;
		i++;
		j--;
	}
}


int	main(void)
{
	int	tab[] = {123456};
	int	i;
	ft_rev_int_tab(tab, 6);
	for (i = 0; i < 6; i++)
	{
		printf("%d", tab[i]);
	}
}
