/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:06:45 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/13 01:53:17 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	low2up(char *a)
{
	*a -= 32;
}

int	is_upper(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char	*str)
{
	char	*tmp;

	tmp = str;
	while (*str != '\0')
	{
		if (is_upper(*str) == 0)
		{
			low2up(str);
		}
	}
	return (tmp);
}
