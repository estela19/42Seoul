/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 02:34:16 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/22 02:37:19 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOR_H
# define OPERATOR_H

# define ADD 0
# define SUB 1
# define MUL 2
# define DIV 3
# define MOD 4

int	add(int a, int b);
int	sub(int a, int b);
int	mul(int a, int b);
int	div(int a, int b);
int	mod(int a, int b);

#endif