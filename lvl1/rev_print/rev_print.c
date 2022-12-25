#include<unistd.h>
#include<stdio.h>
int main(int ac, char **av)
{
	int len;
	char *str;

	if(ac == 2)
	{
		len = 0;
		str = av[1];
		while(str[len])
			len++;
		len -= 1;
		while(str[len] && len >= 0)
		{
			write(1, &str[len], 1);
			len--;
		}
	}
	write(1, "\n", 1);
}