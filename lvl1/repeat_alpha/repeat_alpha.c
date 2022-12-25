#include<unistd.h>

void putlen(char c, int count)
{
	int i;

	i = 0;
	while(i < count)
	{
		write(1, &c, 1);
		i++;
	}
}

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
			if(str[i] >='a' && str[i]<='z')
				putlen(str[i], str[i] - 96);
			else if(str[i] >= 'A' && str[i] <='Z')
				putlen(str[i], str[i] - 64);
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}