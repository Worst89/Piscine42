/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:13:31 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/14 16:20:08 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	char	x;

	x = *str;
	while (*str != '\0')
	{
		write(1, &x, 1);
		str++;
		x = *str;
	}
}
int main(int argc, char **argv)
{
	ft_putstr(argv[2]);
	return (0);
}
