/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:03:59 by enanot-m          #+#    #+#             */
/*   Updated: 2023/09/14 14:16:02 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;
	int		rest;

	j = 0;
	rest = 0;
	while ((j < n) && (!rest) && (s1[j] != '\0') && (s2[j] != '\0'))
	{
		rest = s1[j] - s2[j];
		j++;
	}
	if ((j < n) && (!rest) && ((s1[j] == '\0' || s2[j] == '\0')))
	{
		rest = s1[j] - s2[j];
	}
	return (rest);
}
/*int main(void)
{
	int i;
	int n;
	int j;

	char s1[]= "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
	char s2[]= "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	n = 60;
	j = strncmp(s1,s2,n);
	i = ft_strncmp (s1, s2, n);
	
	printf ("i es %d\n",i);
	printf("j es %d\n", j);
	return (0);

}*/
