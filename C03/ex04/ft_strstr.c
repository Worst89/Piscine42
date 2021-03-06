/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:05:53 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/13 11:08:54 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[x] != 0)
	{
		y = 0;
		while (str[x + y] == to_find[y] && str[x + y] != 0)
		{
			if (to_find[y + 1] == 0 )
				return (&str[x]);
			y++;
		}
		x++;
	}
	return (0);
}
