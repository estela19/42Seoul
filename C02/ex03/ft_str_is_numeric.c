/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:58:35 by estela19          #+#    #+#             */
/*   Updated: 2021/09/12 15:30:56 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_num(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	flag;

	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			flag = check_num(*str);
			if (flag == 0)
				return (0);
			str++;
		}
		return (1);
	}
}
