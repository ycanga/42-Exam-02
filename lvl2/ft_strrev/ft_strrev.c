#include <string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

// char *ft_strrev(char *str)
// {
// 	int i = -1;
// 	int length = 0;
// 	char temporary = str[i];

// 	while (str[length])
// 		length++;
// 	while (++i < --length)
// 	{
// 		str[i] = str[length];
// 		str[length] = temporary;
// 	}
// 	return (str);
// }

 char    *ft_strrev(char *str)
 {
     int i;
     int len;
    char tmp;

     i = 0;
     len = 0;
     if(!str)
         return NULL;
     while (str[len])
         len++;
     len-=1;
      while(len > i)
      {
          tmp = str[i];
          str[i] = str[len];
          str[len] = tmp;
          i++;
          len--;
      }
     return str;
 }

int main()
{
    char p[] = "asd";
    printf("%s\n", ft_strrev(p));
}