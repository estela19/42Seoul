/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 02:34:16 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/25 01:31:20 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_H
# define OPERATOR_H

# define ADD 0
# define SUB 1
# define MUL 2
# define DIV 3
# define MOD 4

long long int	add(int a, int b);
long long int	sub(int a, int b);
long long int	mul(int a, int b);
long long int	div(int a, int b);
long long int	mod(int a, int b);

#endif