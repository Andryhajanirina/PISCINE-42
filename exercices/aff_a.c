/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:03:31 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/12 13:42:42 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	char i;

	i = '0';
	nbr = nbr + i;
	write(1, &nbr, 1);
}

char	ft_aff_a(char *str)
{
	char	get_a;

	get_a = 'x';
	while (*str)
	{
		if (*str == 'c')
		{
			get_a = *str;
			return (get_a);
		}
		str++;
	}
	return (get_a);
}

/*
int	main(void)
{
	char	*str;
	char	res;

	str = "motamo";
	res = ft_aff_a(str);
	write(1, &res, 1);
}
*/

int main(void)
{
	int nbr;

	nbr = 10;
	ft_putnbr(nbr);
	return (0);
}
