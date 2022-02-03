/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:49:42 by htomas-d          #+#    #+#             */
/*   Updated: 2022/01/31 15:49:45 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (a <= (nb / a))
	{
		if (nb % a == 0)
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*int main()
{
	printf("%d", ft_is_prime(11));
	return (0);
}*/