/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarao-de <jarao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:05:01 by jarao-de          #+#    #+#             */
/*   Updated: 2024/09/05 10:39:56 by jarao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	index;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0')
		index = index + 1;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index = index + 1;
	}
}

int	main(int argc, char **argv)
{
	int		index;
	int		jump;
	char	*temp;

	index = 2;
	while (index < argc)
	{
		temp = argv[index];
		jump = index - 1;
		while ((jump > 0) && (ft_strcmp(argv[jump], temp) > 0))
		{
			argv[jump + 1] = argv[jump];
			jump = jump - 1;
		}
		argv[jump + 1] = temp;
		index = index + 1;
	}
	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		write(1, "\n", 1);
		index = index + 1;
	}
}
