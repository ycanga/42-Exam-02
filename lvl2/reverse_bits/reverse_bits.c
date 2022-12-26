#include <string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit = 0;

    while(i>0)
    {
        bit = bit * 2 + (octet % 2);
        octet /= 2;
        i--;
    }
    return bit;
}

int main()
{
    printf("%c", reverse_bits(2));
}