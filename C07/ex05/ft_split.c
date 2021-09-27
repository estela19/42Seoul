/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:16:53 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/27 18:32:47 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		g_i;
int		g_idx;
char	g_cset[200];

void	set_cset(char *charset)
{
	int	i;

	i = 0;
	while (i < 200)
		g_cset[i++] = 0;
	while (*charset != '\0')
	{
		g_cset[(int)(*charset)] = 1;
		charset++;
	}
}

char	**newarr(void)
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

void	set_variable(void)
{
	g_i = 0;
	g_idx = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**sol;

	set_variable();
	sol = newarr();
	set_cset(charset);
	if (g_cset[(int)(*str)])
		str++;
	while (*str)
	{
		if (!g_cset[(int)(*str)])
			sol[g_i][g_idx++] = *str;
		else
		{
			sol[g_i][g_idx] = '\0';
			g_idx = 0;
			if (sol[g_i][0] != '\0')
				g_i++;
		}
		str++;
	}
	sol[g_i++][g_idx] = '\0';
	sol[g_i] = 0;
	return (sol);
}
