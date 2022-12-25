#include<unistd.h>
#include<stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

int main(int ac, char **av)
{
	int i;
	char *str;
	char *src;
	char *rplc;

	if(ac == 4)
	{
		i = 0;
		str = av[1];
		if(ft_strlen(av[2]) > 1 || ft_strlen(av[3]) > 1)
		{
			write(1, "\n", 1);
			return 0;
		}
		else{
			src = av[2];
			rplc = av[3];
			while(str[i])
			{
				if(str[i] == src[0])
					str[i] = rplc[0];
				write(1, &str[i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}