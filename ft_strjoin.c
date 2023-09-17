/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:46:21 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/15 18:23:36 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

size_t static	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*aux;

	k = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	aux = (char *) malloc (sizeof (char) * (i + j));
	if (aux == NULL)
		return (NULL);
	while (k < i)
	{
		aux[k] = s1[k];
		k++;
	}
	i = 0;
	while (i <= j)
	{
		aux[k++] = s2[i];
		i++;
	}
	return (aux);
}
/*int main (void)
{
	char* s1 = "hola mundo";
	char* s2 = "123456789";
	
	printf("este es ft-%s-\n", ft_strjoin(s1,s2));
	return(0);	
}*/
