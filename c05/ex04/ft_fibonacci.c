/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:51:12 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/23 14:45:23 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
* In mathematics, the Fibonacci sequence is a sequence of integers
* in which each number is the sum of the two numbers preceding it.
* It begins with the numbers 0 and 1,
* then continues with 1 (sum of 0 and 1), 2 (sum of 1 and 1),
* 3 (sum of 1 and 2), 5 (sum of 2 and 3), 8 (sum of 3 and 5), etc.
* The terms of this sequence,
* that is, the numbers appearing in this sequence, are called Fibonacci numbers.
*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	index;

	index = 9;
	printf("%d", ft_fibonacci(index));
	return (0);
}
*/
