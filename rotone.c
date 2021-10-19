/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:42:05 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/19 18:23:28 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i;
	
	i = 0;
	if(argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while(argv[1][i] != 0)
	{
		while( argv[1][i] == 122 || argv [1][i] == 90)
				{
					argv[1][i] = argv[1][i] - 25;
					write(1, &argv[1][i], 1);
					i++;
				}
		while	((argv[1][i] >= 97 && argv[1][i] < 122)||( argv[1][i] >= 65 && argv[1][i] < 90))
			{	
				argv[1][i] = argv[1][i] + 1;
				write(1, &argv[1][i], 1);
				i++;
			}
	}
	write(1, "\n", 1);
	return (0);
}			
