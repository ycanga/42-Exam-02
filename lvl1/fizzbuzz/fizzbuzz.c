#include<unistd.h>

void ft_putnbr(int nbr)
{
	char str[] = "0123456789";
	if(nbr > 9)
		ft_putnbr(nbr / 10);
	write(1, &str[nbr % 10], 1);
}

int main()
{
	int i;

	i = 1;
	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuz", 8);
		else if(i % 3 == 0 && i % 5 != 0)
			write(1, "fizz", 4);
		else if(i % 3 != 0 && i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}