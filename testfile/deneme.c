#include <unistd.h>

int main(void)
{
    write (1, "a", 1);
    return (0);
}
//------------------------------------//
#include <unistd.h>

int main(void)
{
    write (1 ,"z", 1);
    return(0);
}
//------------------------------------//
#include <unistd.h>

int main(void)
{
    write(1 ,"Hello World!\n", 13);
    return(0);
}
//------------------------------------//
#include <unistd.h>

int main(void)
{
    char i;

    i = '9';
    while(i >= '0')
    {
        write(1 ,&i ,1);
        i--;
    }
    write(1, "\n", 1);
    return(0);
}
//------------------------------------//
#include <unistd.h>

int main(void)
{
    char i;
    char j;

    i = 'a';
    j = 'B';
    while (j <= 'Z')
    {
        write(1 ,&i , 1);
        write(1 ,&j , 1);
        i += 2;
        j += 2;
    }
    write(1, '\n', 1);
    return(0);
}
//------------------------------------//
#include <unistd.h>

int main(void)
{
    char z;
    char y;

    z = 'z';
    y = 'Y';
    while (y >= 'A')
    {
        write(1 ,&z , 1);
        write(1 ,&y , 1);
        z -= 2;
        y -= 2;   
    }
    write(1 ,'\n', 1);
    return(0);
}
//------------------------------------//
#include <unistd.h>

void ft_print_numbers(void)
{
    char nb;

    nb = '0';
    while (nb <= '9')
    {
        write(1, &nb ,1);
        nb++;
    }
}
int main(void)
{
    ft_print_numbers();
}
//------------------------------------//
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putstr(char *str)
{
    while(*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}
//------------------------------------//
char *ft_strcpy(char *s1, char *s2)
{
    int c;

    c = 0;
    while(s2[c] != '\0')
    {
        s1[c] = s2[c];
        c++;
    }
    s1[c] = '\0';
    return (s1);
}
//------------------------------------//
int     ft_strlen(char *str)
{
    int c;

    c = 0;
    while(str[c] != '\0')
    {
        c++;
    }
    return(c);
}
//------------------------------------//
void ft_swap(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}
//------------------------------------//