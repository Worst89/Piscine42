/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:41:00 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/19 13:56:42 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	if (nb < 0)
		return (0);
	else if (!nb)
		return (1);
	i = 1;
	num = 1;
	while (i <= nb)
	{
		num *= i;
		i++;
	}
	return (num);
}
