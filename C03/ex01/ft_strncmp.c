/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:25:22 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/20 21:31:20 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while ((*s1 != '\0' || *s2 != '\0'))
	{
		if (idx == n)
			return (0);
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			idx++;
			continue ;
		}
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s1 < *s2)
			return (*s1 - *s2);
	}
	if (*s1 == '\0' && *s2 != '\0')
		return (*s2);
	else if (*s2 == '\0' && *s1 != '\0')
		return (*s1);
	else
		return (0);
}
