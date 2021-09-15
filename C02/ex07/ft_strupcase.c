/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:06:45 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/14 02:42:45 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	low2up(char *a)
{
	*a -= 32;
}

int	ctype(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else if (a >= 'a' && a <= 'z')
		return (2);
	else
		return (0);
}

char	*ft_strupcase(char	*str)
{
	char	*tmp;

	tmp = str;
	while (*str != '\0')
	{
		if (ctype(*str) == 2)
		{
			low2up(str);
		}
		str++;
	}
	return (tmp);
}
