/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:54:10 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/09 15:33:19 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void    print_array(int *arr, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
    printf("\n");
}

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int swaped;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		swaped = 0;
		while (j < size - i -1)
		{
			if(tab[j] > tab[j + 1])
			{
				swap(&tab[j], &tab[j + 1]);
				swaped = 1;
			}

			j++;
		}

		if(swaped == 0)
		{
			break;
		}

		i++;
	}
}

int	main (void)
{
	int	tab[] = {64, 25, 12, 22, 11};
	int	size;

	size = sizeof(tab) / sizeof(tab[0]);
	print_array(tab, size);
	ft_sort_int_tab(tab, size);
	print_array(tab, size);
}
