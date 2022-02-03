/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:16:13 by htomas-d          #+#    #+#             */
/*   Updated: 2022/02/02 11:46:56 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	while (src[i] != '\0')
		i++;
	cpy = (char *)malloc(i * sizeof(char) + 1);
	if (cpy == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{	
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*int main(void) 
{
  printf("Exercice 00 : ft_strdup \n\n");
	char source[] = "henrique"; 
	char *str = strdup(source); 
	char *str2 = ft_strdup(source);
  printf("Result: %s \n", str2);
  printf("Expected outcome: %s \n", str);
}*/
