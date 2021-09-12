/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:16:15 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/12 16:19:14 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	up2low(char *a)
{
	*a += 32;
}

int	is_upper(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char	*str)
{
	char	*tmp;

	tmp = str;
	while (*str != '\0')
	{
		if (is_upper(*str) == 1)
		{
			up2low(str);
		}
	}
	return (tmp);
}
