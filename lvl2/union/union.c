#include <string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int cntrl(char c, char *str, int index)
{
    int i;

    i = 0;
    while(i < index)
    {
        if(str[i] == c)
            return 0;
        i++;
    }
    return 1;
}

int main(int ac, char **av)
{
    int i;
    int k;
    char *str;
    char *str2;

    if(ac == 3)
    {
        i = 0;
        k = 0;
        str = av[1];
        str2 = av[2];
        while(str[i])
            i++;
        while(str2[k])
        {
            str[i] = str2[k];
            k++;
            i++;
        }
        k = 0;
        while (k <= i)
        {
            if(cntrl(str[k], str, k) == 1)
                write(1, &str[k], 1);
            k++;
        }
        
    }
    write(1, "\n", 1);
}