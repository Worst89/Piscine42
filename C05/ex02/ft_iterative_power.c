/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:41:52 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/19 13:42:37 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	if (power < 0)
		return (0);
	else if (!power)
		return (1);
	i = 1;
	num = nb;
	while (i < power)
	{
		num *= nb;
		i++;
	}
	return (num);
}
