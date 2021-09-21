/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:52:40 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/21 17:40:07 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"
#include "parse.h"

int parseint(char *inp)
{
	int	i;
	int num;

	i = 0;
	num = 0;
	while (inp[i] != '\0')
	{
		num *= 10;
		num += inp[i] - '0';
		i++;
	}
	return (num);
}

void parsing(char (*input)[SIZE])
{
	int	i;

	i = 0;
	while (input[++i][0] == '-' )
		;
	if (input[i][2] != '0')
		g_pbyte = input[i][2] - '0';
	else
		g_pbyte = parseint(input[i + 1]); 
}