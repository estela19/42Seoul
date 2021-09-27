/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:17:07 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/27 14:26:03 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}

int	base_check(char *str)
{
	char	*curr;
	int		index;
	int		jndex;

	curr = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (0);
	while (*curr)
	{
		if (is_space(*curr) || *curr == '+' || *curr == '-')
			return (0);
		curr++;
	}
	index = 0;
	while (index < curr - str)
	{
		jndex = index + 1;
		while (jndex < curr - str)
			if (str[index] == str[jndex++])
				return (0);
		index++;
	}
	return (1);
}

int	compute_number_length(unsigned int number, int radix, int negative)
{
	unsigned int	len;

	if (negative)
		len = 1;
	else
		len = 0;
	while (1)
	{
		len++;
		if (number / radix == 0)
			break ;
		number /= radix;
	}
	return (len);
}
