/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgasco-g <dgasco-g@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:03:28 by dgasco-g          #+#    #+#             */
/*   Updated: 2024/12/27 17:03:28 by dgasco-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int print_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	print_nbr(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		if (n == -2147483648)
			return (print_str("-2147483648"));
		else
		{
			write(1, "-", 1);
			n = -n;
			len++;
		}
	}
	if (n > 9)
		len = print_nbr(n / 10);
	print_char((n % 10) + 48);
	return (len);
}

int print_nbr_2(int nbr)
{
	if (nbr < 0)
		nbr = -nbr;
	return (print_nbr(nbr));
}