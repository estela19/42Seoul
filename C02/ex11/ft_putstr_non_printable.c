/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:29:19 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/20 15:24:09 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check_printable(char a)
{
	if (a >= 32 && a <= 126)
		return (1);
	else
		return (0);
}

void	print_num(int n)
{
	char	c;

	c = '0' + n;
	write(1, &c, 1);
}

void	print_char(int n)
{
	char	c;

	c = 'a' + n - 10;
	write(1, &c, 1);
}

void	ft_print_nonprintable(int a)
{
	  int		n1;
	  int		n2;
	const char	*slash = "\\";

	n1 = a / 16;
	n2 = a % 16;
	write(1, slash, 1);
	print_num(n1);
	if (n2 < 10)
		print_num(n2);
	else
		print_char(n2);
}

void	ft_putstr_non_printable(char *str)
{
	int	flag;
	int	num;

	while (*str != '\0')
	{
		flag = check_printable(*str);
		if (flag)
			write(1, str, 1);
		else
		{
			num = *str;
			if (num < 0)
				num += 256;
			ft_print_nonprintable(num);
		}
		str++;
	}
}
