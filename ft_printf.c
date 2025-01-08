/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgasco-g <dgasco-g@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 01:33:08 by dgasco-g          #+#    #+#             */
/*   Updated: 2024/12/27 01:33:08 by dgasco-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void putchar()

int	check(char input, va_list args)
{
	if (input == 'c')
		return (print_char(va_arg(args, char)));
	else if (input == 's')
		return (print_str(va_arg(args, char *)));
	else if (input == 'p')

	else if (input == 'd')
		return (print_nbr(va_arg(args, int)));
	else if (input == 'i')
		return (print_nbr(va_arg(args, int)));
	else if (input == 'u')
		return (print_nbr_2(va_arg(args, int)));
	else if (input == 'x')

	else if (input == 'X')

	else if (input == '%')
		write(1, '%', 1);
	else
		return (0);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			i += check(*input, args);
		}
		else 
			i += print_char(*input);
		input++;
	}
	va_end(args);
	return (i);
}
