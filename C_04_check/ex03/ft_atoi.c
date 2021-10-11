#include <unistd.h>

int     ft_atoi(char *str)
{
    int i;
    int s;

    i = 0;
    s = 1;

    while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if(str [i] == '-')
            s *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')  
    {
        
    }
}