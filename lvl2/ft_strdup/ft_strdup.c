#include <string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    char *dst;

    i = 0;
    if(!src)
        return NULL;
    while(src[i])
        i++;
    dst = malloc(sizeof(char) * i + 1);
    if(!dst)
        return NULL;
    i = 0;
    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}
