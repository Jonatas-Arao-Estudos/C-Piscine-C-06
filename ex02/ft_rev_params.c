/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:59:53 by jarao-de          #+#    #+#             */
/*   Updated: 2024/09/04 17:01:24 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;
	int	jump;

	index = argc - 1;
	while (index > 0)
	{
		jump = 0;
		while (argv[index][jump] != '\0')
		{
			write(1, &argv[index][jump], 1);
			jump = jump + 1;
		}
		write(1, "\n", 1);
		index = index - 1;
	}
}
