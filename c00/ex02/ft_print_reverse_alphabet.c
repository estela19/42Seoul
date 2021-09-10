#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	const char	*a = "zyxwvutsrqponmlkjihgfedcba";

	write(1, a, 26);
}
