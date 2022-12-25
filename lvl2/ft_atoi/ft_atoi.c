#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_atoi(const char *str)
{
	int res;
	int neg;

	res = 0;
	neg = 1;
	while(*str == ' ' || *str == '\t' || *str == '\n' || (*str >= 9 && *str<=13))
		str++;
	if(*str == '-' || *str == '+')
	{
		if(*str == '-')
			neg = -1;
		str++;
	}
	while(*str >= '0' && *str<='9')
	{
		res = res * 10 + *str - '0';
		str++;
	}

	return res * neg;
}

int main()
{
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));//
	printf("%d\n", atoi(a));
}