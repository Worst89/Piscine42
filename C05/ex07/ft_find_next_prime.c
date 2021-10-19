/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:55:27 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/19 13:55:32 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	if (nb == 2)
		return (1);
	if (nb <= 1 || !(nb % 2))
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (!(nb % i))
			return (0);
		i += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (nb)
	{
		if (ft_is_prime(nb))
			return (nb);
		else
			nb += 1;
	}
	return (0);
}
