#include <string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    if(!s || !reject)
        return 0;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}
