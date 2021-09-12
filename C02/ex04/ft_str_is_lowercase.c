/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:11:17 by estela19          #+#    #+#             */
/*   Updated: 2021/09/12 15:30:58 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lowercase(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	flag;

	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			flag = check_lowercase(*str);
			if (flag == 0)
				return (0);
			str++;
		}
		return (1);
	}
}
