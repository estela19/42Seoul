/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 02:37:47 by sooykim           #+#    #+#             */
/*   Updated: 2021/09/29 01:34:57 by sooykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# define ADD 0
# define SUB 1
# define MUL 2
# define DIV 3
# define MOD 4

long long int	parse_int(char *a);
int				classifyop(char op);
int				parse_op(char *op);

#endif