#include<unistd.h>

int main(int ac, char **av)
{
	int i;
	char *str;

	if(ac == 2)
	{
		i = 0;
		str = av[1];
		while(str[i]&&(str[i] ==' ' || str[i] == '\t'))
			i++;
		while(str[i]&&(str[i] != ' ' && str[i] != '\t'))
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}