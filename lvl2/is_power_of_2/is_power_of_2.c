#include <string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	    is_power_of_2(unsigned int n)
{
    while(n > 2)
    {
        if(n % 2 == 0)
            n /= 2;
        else
            return 0;
    }
    return 1;
}
