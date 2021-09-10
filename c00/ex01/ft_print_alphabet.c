#include<unistd.h>

void	ft_print_alphabet(void)
{
	const char	*a = "abcdefghijklmnopqrstuvwxyz";

	write(1, a, 26);
}
