/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:31:29 by htomas-d          #+#    #+#             */
/*   Updated: 2022/01/29 11:31:45 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main()
{
	char str1[100] = "hello", str2[100] = "ola ola ola";
	char str3[100] = "hello", str4[100] = "ola ola ola";

	ft_strcat(str1, str2);
	printf("%s\n\n", str1);
	strcat(str3, str4);
	printf("%s\n", str3);
	return (0);
}*/
