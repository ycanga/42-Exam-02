#include<unistd.h>
#include<stdio.h>

int main(int ac, char **av)
{
	int i;
	char *str;

	if(ac == 2)
	{
		i = 0;
		str = av[1];
		while(str[i])
		{
			if(str[i]>='a' && str[i]<='z')
				str[i] -= 32;
			else if(str[i]>='A' && str[i]<='Z')
				str[i] += 32;
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}