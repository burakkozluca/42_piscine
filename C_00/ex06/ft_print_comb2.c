#include <unistd.h>

void    ft_putchar(char a){
    write(1, &a, 1);
}
void ft_print_comb2(void){
    int i;
    int j;

    i = -1;
    while(i <= 98){
        j=0;
        while (j <= 99)
        {   
            if (j>i)
            {
                ft_putchar(i/10+48);
                ft_putchar(i%10+48);
                ft_putchar(' ');
                ft_putchar(j/10+48);
                ft_putchar(j%10+48);
                if(!(i == 98)){
                    ft_putchar(',');
                }
                if (!(i == 98)){
                    ft_putchar(' ');
                }
            }
        j++;   
        }   
    i++;
    }
}


