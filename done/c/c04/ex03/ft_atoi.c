/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:16:15 by htomas-d          #+#    #+#             */
/*   Updated: 2022/01/26 13:50:33 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	minuscount;
	int	nb;

	i = 0;
	nb = 0;
	minuscount = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			minuscount++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if ((minuscount % 2) != 0)
		nb = -nb;
	return (nb);
}
/*int main()
{
	char *str = " ---+--+1234ab567";
	ft_atoi(str);
	printf("%d", ft_atoi(str));
}*/
