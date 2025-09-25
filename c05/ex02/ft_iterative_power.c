/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:45:01 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/23 11:01:29 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (0 < power)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d", ft_iterative_power(nb, 4));
	return (0);
}
*/
