/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:20:25 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/23 10:44:11 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	• Create an iterative function named as `ft_iterative_factorial`
*	that returns a number. This number should be the result
*	of a factorial operation based on the given parameter.
*	• If the argument is not valid, the function should return 0.
*	• Overflows do not need to be handled;
*	the function’s return value will be undefined in such cases.
*/
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		result = 1;
		while (0 < nb)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;

	n = 5;
	printf("%d", ft_iterative_factorial(n));
	return (0);
}
*/
