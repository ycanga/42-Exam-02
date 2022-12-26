#include <string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(int ac, char **av)
{
    int i;
    int k;
    int l;
    char *str1;
    char *str2;

    if(ac == 3)
    {
        i = 0;
        str1 = av[1];
        str2 = av[2];
        while(str1[i])
        {
            k = 0;
            while (str2[k])
            {
                if(str1[i] == str2[k])
                {
                    l = 0;
                    while(str1[l] != str1[i])
                        l++;
                    if(l == i)
                    {
                        l = 0;
                        while(str2[l] != str2[k])
                            l++;
                        if(l == k)
                            write(1, &str1[i], 1);
                    }
                }
                k++;
            }
            
            i++;
        }
    }
    write(1, "\n", 1);
}