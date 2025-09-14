/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 08:12:13 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/09 11:57:58 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 45;
	b = 23;
	printf("Avant : %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("Apres : %d, %d", a, b);
	return (0);
}
