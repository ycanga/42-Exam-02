#include <string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int		max(int* tab, unsigned int len)
{
	unsigned int i;
	int tmp;

	i = 0;
	while (i < len - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return (tab[0]);
}
// 5 6 9 7 3
// 5- 4-
// 0- 1- 2-

// int		max(int* tab, unsigned int len)
// {
//     unsigned int i;
//     int tmp;

//     i = 0;
//     tmp = tab[0];

//     while(i < len - 1)
//     {
//         if(tab[i] > tmp)
//             tmp = tab[i];
//         i++;
//     }

//     return tmp;
// }

int main()
{
    int s[]={0, 1, 6 , 8 ,9};// 1 6 8 9 0

    printf("%d", max(s, 5));
}