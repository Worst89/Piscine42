/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:05:53 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/12 15:35:57 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;
	int	z;

	x=0;
	while (str[x] != 0)
	{
		if (str[x] == to_find[y])
			z = x;
			y = 0;
			while ((str[x] == to_find[y]) && str[x] != 0 )
			{
				x++;
				y++;;
				if (to_find[y] == 0)
					return (str[z]);
			}
		x++;
	}
	return (str[x]);
}
