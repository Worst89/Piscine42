/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:58:12 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/12 11:03:32 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest. char *src)
{
	unsigned int x:
	unsigned int y;
	unsigned int z;

	x = 0;
	while (src[x] != 0)
		x++;
	y = 0;
	while (dest[y] != 0)
		y++;
	x = x + y;
	z = 0;
	while (y <= x)
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	dest[x] = 0;
}
