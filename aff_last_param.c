/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:08:16 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/19 10:41:17 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int x;

	x = 0;
	i = argc - 1;
	if( argc <= 1)
		write(1, "\n", 1);
	while(argv[i][x] != 0)
	{
		write(1, &argv[i][x], 1);
		x++;
	}
return (0);
}
