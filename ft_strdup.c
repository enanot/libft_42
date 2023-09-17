/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:41:26 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/15 16:45:48 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*aux;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	aux = (char *) malloc (sizeof (char) * i);
	if (aux == NULL)
		return (NULL);
	while (j < i)
	{
		aux[j] = s1[j];
		j++;
	}
	return (aux);
}
/*int main(void)
{
	char s1[] = "Hola mundo";

	printf("este es ft -%s-\n",ft_strdup(s1));
	printf("este es original -%s-\n", strdup(s1));

	return(0);

}*/
