/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 02:35:57 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/29 01:49:24 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operator.h"

long long int	add(long long int a, long long int b)
{
	return (a + b);
}

long long int	sub(long long int a, long long int b)
{
	return (a - b);
}

long long int	mul(long long int a, long long int b)
{
	return (a * b);
}

long long int	div(long long int a, long long int b)
{
	return (a / b);
}

long long int	mod(long long int a, long long int b)
{
	return (a % b);
}
