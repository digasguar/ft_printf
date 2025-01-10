/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgasco-g <dgasco-g@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 02:19:50 by dgasco-g          #+#    #+#             */
/*   Updated: 2024/12/27 02:19:50 by dgasco-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF

# define FT_PRINTF
# include <stdarg.h>
// # include "libft.h"

int print_hex(unsigned long str, int i);
int	print_char(char c);
int print_str(char *str);
int print_nbr(int nbr);
int print_nbr_2(int nbr);
int	printf_p(char *a);
#endif