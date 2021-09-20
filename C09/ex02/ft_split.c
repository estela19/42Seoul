/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:31:01 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/20 02:12:45 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	g_cset[200];

void	set_cset(char *charset)
{
	while (*charset != '\0')
	{
		g_cset[(int)(*charset)] = 1;
		charset++;
	}
}

char**	newarr(void)
{
	 int	i;
	char	**sol;

	i = 0;
	sol = (char **)malloc(100 * sizeof(char *));
	while (i < 100)
	{
		sol[i] = (char *)malloc (1000 * sizeof(char));
		i++;
	}
	return (sol);
}

char	**ft_split(char *str, char *charset)
{
	 int	i;
	 int	idx;
	char	**sol;

	sol = newarr();
	set_cset(charset);
	i = 0;
	idx = 0;
	if (g_cset[*str])
		str++;
	while (*str)
	{
		if (!g_cset[*str])
			sol[i][idx++] = *str;
		else
		{
			sol[i][idx] = '\0';
			idx = 0;
			i++;
		}
		str++;
	}
	sol[i++][idx] = '\0';
	sol[i] = '\0';
	return (sol);
}
