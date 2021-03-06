/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonucci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:53:06 by lbonucci          #+#    #+#             */
/*   Updated: 2021/10/11 12:31:00 by lbonucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	ret;

	ret = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 0 || str[i] > 9)
		{
			ret = 0;
		}
		i++;
	}
	return (ret);
}
