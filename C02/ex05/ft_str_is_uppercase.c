/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:17:34 by estela19          #+#    #+#             */
/*   Updated: 2021/09/12 15:29:59 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_uppercase(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	flag;

	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			flag = check_uppercase(*str);
			if (flag == 0)
				return (0);
			str++;
		}
		return (1);
	}
}
