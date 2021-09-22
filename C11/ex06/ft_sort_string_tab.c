/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:42:07 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/22 16:37:38 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			continue ;
		}
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s1 < *s2)
			return (*s1 - *s2);
	}
	if (*s1 == '\0')
		return (*s2);
	else if (*s2 == '\0')
		return (*s1);
	else
		return (0);
}

void	ft_sort(char *tab[], int size)
{
	 int	i;
	 int	j;
	char	*tmp;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			if (ft_strcmp(&tab[j][0], &tab[j + 1][0]) > 0)
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

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

void	ft_sort_string_tab(char **tab)
{
	int	len;

	len = ft_strlen(tab);
	ft_sort(tab, len);
}
