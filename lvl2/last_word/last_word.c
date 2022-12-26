#include <string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int ftstrlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

int main(int ac, char **av)
{
    int len;
    char *str;

    if(ac == 2)
    {
        str = av[1];
        len = ftstrlen(str) - 1;
        while(str[len] && (str[len] == ' ' || str[len] == '\t'))
            len--;
        while(str[len] && str[len] != ' ' && str[len] != '\t')
            len--;
        len++;
        while(str[len] && str[len] != ' ' && str[len] != '\t')
        {   
            write(1, &str[len], 1);
            len++;
        }
    }
    write(1, "\n", 1);
}