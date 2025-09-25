/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:47:03 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/24 09:14:13 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (1);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (-1);
	else if (nb == 0 || nb == 1)
		return (nb);
	else
	{
		while (i < nb)
		{
			if (ft_recursive_power(i, 2) == nb)
				return (i);
			i++;
		}
		return (0);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb;

	nb = 9;
	printf("%d", ft_sqrt(nb));
	return (0);
}
*/
