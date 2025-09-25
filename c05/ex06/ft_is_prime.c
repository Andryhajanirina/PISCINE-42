/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:02:53 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/24 14:30:56 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	Un nombre entier est premier s'il est strictement supérieur à 1
*	et s'il n'est divisible que par 1 et par lui-même. 
*	Les nombres 2, 3, 5, 7, 11, 13 sont des exemples de nombres premiers. 
*	Le nombre 1 n'est pas un nombre premier car il n'a qu'un seul diviseur. 
*	iLe 2 est le seul nombre premier pair.
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(-7));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(6));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(12));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(14));
	printf("%d\n", ft_is_prime(15));
	printf("%d\n", ft_is_prime(16));
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(18));
	printf("%d\n", ft_is_prime(19));
	return (0);
}
*/
