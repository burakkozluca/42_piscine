#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char b[] = {"furkan"};
    char a[] = {"abc"};

    printf("%s ", ft_strcpy(b,a));

    return (0);
}

