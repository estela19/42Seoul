/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 02:35:57 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/25 01:38:00 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operator.h"

long long int	add(int a, int b)
{
	return (a + b);
}

long long int	sub(int a, int b)
{
	return (a - b);
}

long long int	mul(int a, int b)
{
	return (a * b);
}

long long int	div(int a, int b)
{
	return (a / b);
}

long long int	mod(int a, int b)
{
	return (a % b);
}
