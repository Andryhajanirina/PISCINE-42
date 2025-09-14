/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 15:19:26 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/09 14:25:00 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	An array is a pointer.
*	*start is a pointer to the first element of the array
*	*end is a pointer to the last element of the array
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	*start;
	int	*end;

	start = tab;
	end = tab + (size -1);
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
