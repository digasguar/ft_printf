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

int	print_char(char c)
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

int print_nbr(int nbr)
{
	return (print_str(ft_itoa(nbr)));
}

int print_nbr_2(int nbr)
{
	if (nbr < 0)
		nbr = -nbr;
	return (print_str(ft_itoa(nbr)));
}
