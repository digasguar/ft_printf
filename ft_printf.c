/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgasco-g <dgasco-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 01:33:08 by dgasco-g          #+#    #+#             */
/*   Updated: 2025/01/10 18:55:05 by dgasco-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(char input, void *args)
{
	if (input == 'c')
		return (print_char((char)args));
	else if (input == 's')
		return (print_str((char *)args));
	else if (input == 'p')
		return (printf_p((char)args));
	else if (input == 'd')
		return (print_nbr((int)args));
	else if (input == 'i')
		return (print_nbr((int)args));
	else if (input == 'u')
		return (print_nbr_2((int)args));
	else if (input == 'x')
        return (print_hex((unsigned long)args, 1));
	else if (input == 'X')
        return (print_hex((unsigned long)args, 0));
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
			i += check(*input, va_arg(args, void *));
		}
		else 
			i += print_char(*input);
		input++;
	}
	va_end(args);
	return (i);
}