/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:43:34 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/15 00:11:13 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			continue ;
		}
		return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (match(str, to_find))
			return (str);
		str++;
	}	
	return (0);
}
