/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:22:01 by estela19          #+#    #+#             */
/*   Updated: 2021/09/20 15:23:36 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_printable(char a)
{
	if (a >= 32 && a <= 126)
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
