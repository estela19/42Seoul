/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 02:35:57 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/22 02:36:22 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operator.h"

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	mul(int a, int b)
{
	return (a * b);
}

int	div(int a, int b)
{
	return (a / b);
}

int	mod(int a, int b)
{
	return (a % b);
}
