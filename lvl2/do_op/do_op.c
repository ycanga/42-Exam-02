#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(int ac, char **av)
{
	int res;
	int nbr1;
	int nbr2;
	char proc;

	if(ac == 4)
	{
		res = 0;
		nbr1 = atoi(av[1]);
		nbr2 = atoi(av[3]);
		proc = av[2][0];
		if(proc == '+')
			res = nbr1+nbr2;
		if(proc == '-')
			res = nbr1 - nbr2;
		if(proc == '*')
			res = nbr1 * nbr2;
		if(proc == '/')
			res = nbr1/nbr2;
		printf("%d", res);
	}
	printf("\n");
}