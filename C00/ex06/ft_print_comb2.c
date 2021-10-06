/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:11:51 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/04 10:21:07 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printdigits(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}
}

void	printnum(int c1, int c2)
{
	printdigits(c1);
	ft_putchar(' ');
	printdigits(c2);
	if (c1 != 98 || c2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			if (i != j)
				printnum(i, j);
			++j;
		}
		++i;
	}
}
