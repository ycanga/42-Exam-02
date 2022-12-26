#include <string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i;
    int j;

    j = 0;
    i = 0;
    if(!s1 || !s2)
        return 0;
    while(s1[i])
    {
        while(s2[j])
        {
            if(s1[i] != s2[j])
                return s1[i] - s2[i];
            else
            {
                j++;
                break;
            }
            j++;
        }
        i++;
    }
    return 0;
}