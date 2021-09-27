/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:16:38 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/27 14:48:08 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		compute_number_length(unsigned int number, int radix, int minus);
int		is_space(char c);
int		base_check(char *str);

int	base2num(char *base, char match)
{
	int		idx;

	idx = 0;
	while (base[idx])
	{
		if (base[idx] == match)
			return (idx);
		idx++;
	}
	return (-1);
}

char	*convert(char *base, unsigned int number, int minus)
{
	int		idx;
	int		radix;
	int		length;
	char	*string;

	radix = ft_strlen(base);
	length = compute_number_length(number, radix, minus);
	string = (char *)malloc((length + 1) * sizeof(char));
	if (string == 0)
		return (0);
	if (minus)
		string[0] = '-';
	if (minus)
		idx = 1;
	else
		idx = 0;
	while (idx < length)
	{
		string[length - (!minus) - idx++] = base[number % radix];
		number /= radix;
	}
	string[length] = '\0';
	return (string);
}

void	num2base(int num, int radix, unsigned int *result, char *nbr)
{
	while (num != -1)
	{
		*result *= radix;
		*result += num;
		*nbr += 1;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				radix;
	int				minus;
	int				num;
	unsigned int	result;

	if (!base_check(base_from) || !base_check(base_to))
		return (0);
	radix = ft_strlen(base_from);
	result = 0;
	minus = 1;
	while (is_space(*nbr))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*(nbr++) == '-')
			minus *= -1;
	}
	num = base2num(base_from, *nbr);
	num2base(num, radix, &result, nbr);
	if (result == 0)
		minus = 1;
	return (convert(base_to, result, minus <= 0));
}
