#include<unistd.h>

void	ft_print_numbers(void)
{
	char	a[1];

	a[0] = '0';
	while (a[0] <= '9')
	{
		write(1, a, 1);
		a[0]++;
	}
}
