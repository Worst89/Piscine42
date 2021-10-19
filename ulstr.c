/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:29:50 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/18 14:11:17 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main (int argc, char **argv)
{
	int k;

	k = 0;
	if(argc != 2)
		write(1, "\n", 1);
	while (argc == 2 && argv[1][k] != 0)
	{
		while(argv[1][k] >= 97 && argv[1][k]<= 122)
		{
			argv[1][k] -= 32;
			write(1, &argv[1][k], 1);
			k++;
		}
		while(argv[1][k] >= 65 && argv[1][k] <= 90)
		{
			argv[1][k] += 32;
			write(1, &argv[1][k], 1);
			k++;
		}
		if(!(argv[1][k] >= 97 && argv[1][k] <= 122) ||( argv[1][k] >= 65 && argv[1][k] <= 90))
		{
			write(1, &argv[1][k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
	return (0);
	}

