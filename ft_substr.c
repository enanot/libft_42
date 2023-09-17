/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:00:14 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/15 17:28:23 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*aux;
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (start > i)
	{
		aux = NULL;
		return (aux);
	}
	aux = (char *) malloc (sizeof (char) * len);
	if (aux == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		aux[i] = s[i];
		i++;
	}
	return (aux);
}
/*int main(void)
{
	char aux[] = "hola mundo";

	printf("este es ft -%s-\n", ft_substr(aux,100,10));
//	printf("este es original -%s-\n", substr(aux,0,10));
	return(0);
}*/
