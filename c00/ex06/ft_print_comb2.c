/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estela19 <estela19@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:02:21 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/12 02:05:36 by estela19         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	int2char(int a)
{
	return ('0' + a);
}

void	print_numbers(int a, int b, int c, int d)
{
	char	space[1];
	char	a_;
	char	b_;
	char	c_;
	char	d_;

	space[0] = ' ';
	a_ = int2char(a);
	b_ = int2char(b);
	c_ = int2char(c);
	d_ = int2char(d);
	write(1, &a_, 1);
	write(1, &b_, 1);
	write(1, space, 1);
	write(1, &c_, 1);
	write(1, &d_, 1);
}

void	write_sc(void)
{
	const char	*sc = ", ";

	write(1, sc, 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		while (b <= 99)
		{
			print_numbers(a / 10, a % 10, b / 10, b % 10);
			if (a + b != 197)
			{
				write_sc();
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
