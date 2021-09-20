/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:39:02 by estela19          #+#    #+#             */
/*   Updated: 2021/09/20 15:24:52 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_alpha(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	flag;

	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			flag = check_alpha(*str);
			if (!flag)
				return (0);
			str++;
		}
	}
	return (1);
}
