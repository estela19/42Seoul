/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 01:56:45 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/16 02:59:27 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print(char str[])
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *arr1, char *arr2)
{
	int	i;

	i = 0;
	while (arr1[i] != '\0' || arr2[i] != '\0')
	{
		if (arr1[i] > arr2[i])
			return (arr1[i] - arr2[i]);
		else if (arr1[i] < arr2[i])
			return (arr1[i] - arr2[i]);
		i++;
	}
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

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < argc)
	{
		ft_sort(&argv[1], argc - 1);
		i++;
	}
	while (j < argc)
	{
		print(argv[j]);
		j++;
	}
	return (0);
}
