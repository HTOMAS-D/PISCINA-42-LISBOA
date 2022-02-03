/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:49:03 by htomas-d          #+#    #+#             */
/*   Updated: 2022/01/31 15:49:06 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
	{	
		return (index);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*int	main(void)
{
	printf("%i", ft_fibonacci(7));
}*/
