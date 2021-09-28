/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 02:34:16 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/29 01:51:10 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_H
# define OPERATOR_H

# define ADD 0
# define SUB 1
# define MUL 2
# define DIV 3
# define MOD 4

long long int	add(long long int a, long long int b);
long long int	sub(long long int a, long long int b);
long long int	mul(long long int a, long long int b);
long long int	div(long long int a, long long int b);
long long int	mod(long long int a, long long int b);

#endif