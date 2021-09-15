/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:19:33 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/15 00:53:59 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	_toupper(char *a)
{
	if (*a >= 97 && *a <= 122)
	{
		*a -= 32;
	}
}

void	_tolower(char *a)
{
	if (*a >= 65 && *a <= 90)
	{
		*a += 32;
	}
}

int	check(char *a)
{
	if (*a >= 97 && *a <= 122)
	{
		return (0);
	}
	else if (*a >= 65 && *a <= 90)
	{
		return (0);
	}
	else if (*a >= '0' && *a <= '9')
		return (0);
	else if (*a == 32)
		return (1);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	 int	isspace;
	char	*tmp;

	isspace = 1;
	tmp = str;
	while (*str != '\0')
	{
		if (isspace)
		{
			_toupper(str);
		}
		else
		{
			_tolower(str);
		}
		isspace = check(str);
		str++;
	}
	return (tmp);
}
