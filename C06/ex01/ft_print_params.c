/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:22:20 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/14 18:56:40 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc )
	{
		while (argv[i][j] != 0)
	{
		write(1, &argv[i][j], 1);
		j++;
	}
	write (1, "\n", 1);
	j = 0;
	i++;
	}
	return (0);
}
