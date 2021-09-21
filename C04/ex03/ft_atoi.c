/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 02:29:42 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/21 23:54:05 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_num;
int	g_mcnt;

int	check_num(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else if (a == '+' || a == '-' \
	|| a == ' ' || a == '\t' || a == '\n' || a == '\r'\
	|| a == '\f' || a == '\v')
		return (2);
	else
		return (0);
}

void	init(int *flag)
{
	g_num = 0;
	g_mcnt = 0;
	*flag = 0;
}

int	ft_atoi(char *str)
{
	int	flag;
	int	check;

	init(&flag);
	while (*str)
	{
		check = check_num(*str);
		if (check == 1)
		{
			flag = 1;
			g_num *= 10;
			g_num += *str - '0';
		}
		else if (check == 2 && flag == 0)
		{
			if (*str == '-')
				g_mcnt++;
		}
		else
			break ;
		str++;
	}
	if (g_mcnt % 2 == 1)
		g_num *= -1;
	return (g_num);
}
