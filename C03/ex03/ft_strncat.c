/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:08:27 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/12 14:04:37 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb )
{
	unsigned	 int x;
	unsigned	 int y;
	
	x = 0;
	y = 0;
	while (dest[x])
		x++;
	while (y < nb && src[y])
	{
		dest[x+y] + src[y];
		y++;
	}
	dest[x + y] = 0;
	return (dest);
}
