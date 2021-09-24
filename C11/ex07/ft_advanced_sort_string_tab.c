/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 00:04:58 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/23 00:20:59 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str[])
{
	unsigned int	len;

	len = 0;
	while (*str != 0)
	{
		str++;
		len++;
	}
	return (len);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		len;
	char	*tmp;

	len = ft_strlen(tab);
	i = 1;
	while (i < len)
	{
		j = 0;
		while (j < len - i)
		{
			if (cmp(&tab[j][0], &tab[j + 1][0]) > 0)
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	tab[len] = 0;
}
