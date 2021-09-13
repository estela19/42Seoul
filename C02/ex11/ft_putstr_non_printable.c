/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:29:19 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/13 19:40:29 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_printable(char a)
{
	if (a >= 32 && a <= 122)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	flag;

	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			flag = check_printable(*str);
			if (flag == 0)
				return (0);
			str++;
		}
		return (1);
	}
}

void	print(int n)
{
	char	c;

	c = '0' + n;
	write(1, &c, 1);
}

void	ft_print_nonprintable(char	*a)
{
	int	n1;
	int	n2;

	n1 = *a / 16;
	n2 = *a % 16;
	write(1, '\\', 1);
	print(n1);
	print(n2);
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
			ft_print_nonprintable(str);
		}
	}
}
