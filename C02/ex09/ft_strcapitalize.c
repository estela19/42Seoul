/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:19:33 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/13 15:17:58 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	toupper(char *a)
{
	if (*a >= 97 && *a <= 122)
	{
		*a -= 32;
	}
}

void	tolower(char *a)
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
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	 int	isspace;
	char	*tmp;

	isspace = 1;
	tmp = str;
	while (*str == '\0')
	{
		if (isspace)
		{
			toupper(str);
		}
		else
		{
			tolower(str);
		}
		isspace = check(str);
		str++;
	}
}
