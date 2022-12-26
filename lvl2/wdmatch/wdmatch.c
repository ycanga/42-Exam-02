#include <string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i;
    int j;
    int flg;
    char *s1;
    char *s2;
    if(ac == 3)
    {
        i = 0;
        j = 0;
        flg = 0;
        s1 = av[1];
        s2 = av[2];
        while(s1[i])
        {
            while(s2[j])
            {
                if(s1[i] == s2[j])
                {
                    flg++;
                    j++;
                    break;
                }
                j++;
            }
            i++;
        }
        if(flg == i)
            ft_putstr(s1);
    }
    write(1, "\n", 1);
}