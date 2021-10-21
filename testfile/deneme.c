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
//aff_a//
#include  <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "a", 1);
    else
    {
        while (*argv[1] != '\0' )
        {
            if (*argv[1] == 'a')
            {
                write(1, "a", 1);
                break;
            }
            argv[1]++;
        }
    }
    write(1 , "\n", 1);
    return(0);
}
//------------------------------------//
//aff_first_param//
#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        while (*argv[1])
            write(1, argv[1]++, 1);
    }
    write(1 , "\n", 1);
    return(0);
}
//------------------------------------//
//aff_last_param//
#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        while( *argv[argc - 1])
            write(1 , argv[argc - 1]++, 1);
    }
    write(1 , "\n" , 1);
}
//------------------------------------//
//aff_z//
#include <unistd.h>

int main(void)
{
    write(1, "z", 1);
    write(1, "\n", 1);
    return(0);
}
//------------------------------------//
/*repeat_alpha

Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int c;
    if(ac == 2)
    {
        while(av[1][i] != '\0')
        {
            if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                c = av[1][i] - 64;
            else if (av[1][i] >= 'a' && av[1][i] <= 'z')
                c = av[1][i] - 96;
            while (c)
            {
                write(1, &av[1][i], 1);
                c--;
            }
            c = 1;
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/
#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

int main(int ac, char **av)
{
    int i;
    int len;
    char tmp;

    i = 0;
    if(ac == 2)
    {
        len = ft_strlen(av[1]);
        len--;
        while (i < len)
        {
            tmp = av[1][i];
            av[1][i] = av[1][len];
            av[i][len] = tmp;
            i++;
            len--;
        }
        ft_putstr(av[1]);
    }
    write(1, "\n", 1);
    return(0);
}
/*

Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/
#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if( ac == 2)
    {
        while(av[1][i] != '\0')
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'M')
                av[1][i] += 13;
            else if (av[1][i] >= 'N' && av[1][i] <= 'Z')
				av[1][i] -= 13;
			else if (av[1][i] >= 'a' && av[1][i] <= 'm')
				av[1][i] += 13;
			else if (av[1][i] >= 'n' && av[1][i] <= 'z')
				av[1][i] -= 13;
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1 , "\n", 1);
    return(0);
}
/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int tmp;

    i = 0;
    if (ac == 2)
    {
        while(av[1][i])
        {
            if ((av[1][i] >= 'A' && av[1][i] <= 'Y') || (av[1][i] >= 'a' && av[1][i] <= 'y'))
            {
                tmp = av[1][i] + 1;
                write(1, &tmp, 1);
            }
            else if (av[1][i] == 'Z'|| av[1][i] == 'z')
                (av[1][i] == 'Z') ? write(1, "A", 1) : write(1 , "a", 1);
            else
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
/*
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first 
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
*/
#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if(ac == 4)
    {
        while (av[1][i] != '\0')
        {
            if (av[2][1] == '\0' && av[3][1] == '\0')
            {
                if (av[1][i] == av[2][0])
                    write(1 , &av[3][0], 1);
                else
                    write(1 , &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
/*
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
*/

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/*

Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/
#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if(ac == 2)
    {
        while(av[1][i] != '\0')
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] = 'M' - (av[1][i] - 'N');
            else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 'm' - (av[1][i] - 'n');
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/*
Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
*/
