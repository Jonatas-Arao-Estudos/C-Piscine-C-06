/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:40:29 by jarao-de          #+#    #+#             */
/*   Updated: 2024/09/04 16:48:10 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;

	if (argc >= 1)
	{
		index = 0;
		while (argv[0][index] != '\0' && argc)
		{
			write(1, &argv[0][index], 1);
			index = index + 1;
		}
		write(1, "\n", 1);
	}
}
