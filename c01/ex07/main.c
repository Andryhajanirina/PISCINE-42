/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 15:19:26 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/09 14:38:31 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
*	An array is a pointer.
*	*start is a pointer to the first element of the array
*	*end is a pointer to the last element of the array
*/

void	ft_rev_int_tab(int *arr, int size );

void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
}

int main (void)
{
	int	tab[];
	int	size;

	tab = { 10, 20, 30, 40, 50 };
	size = sizeof(tab) / sizeof(tab[0]);
	print_array(tab, size);
	ft_rev_int_tab(tab, size);
	print_array(tab, size);
}
