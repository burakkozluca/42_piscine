#include <unistd.h>

void    ft_putchar(char a)
{
    write (1, &a, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {   
        nb = -1 * nb;
        ft_putchar('-');
    }
    if (nb > 10)
    {
        ft_putnbr(nb / 10);    
    }
    ft_putnbr((nb % 10) + 48);
}
int main(void){
    ft_putnbr(1256);
}
