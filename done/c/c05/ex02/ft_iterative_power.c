/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:48:26 by htomas-d          #+#    #+#             */
/*   Updated: 2022/01/31 15:48:31 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{	
	int	b;

	b = nb;
	if ((nb == 0) && (power == 0))
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		b = b * nb;
		power--;
	}
	return (b);
}
/*int main()
{
	printf("%d",ft_iterative_power(5, 3));
}*/
