/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:55:39 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/24 11:08:18 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	Write a program that displays its own name, followed by a new line
*	$>./a.out | cat -e
*	./a.out$
*	$>
*/
int	main(int argc, char **argv)
{
	argc = 0;
	while (argv[0][argc])
		write(1, &argv[0][argc++], 1);
	write(1, "\n", 1);
	return (0);
}
