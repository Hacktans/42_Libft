/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:03:19 by hadalici          #+#    #+#             */
/*   Updated: 2024/10/21 19:46:56 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*a;

	i = 0;
	j = 0;
	a = (char *)malloc(ft_strlen(s2) + ft_strlen(s1) + 1);
	if (!a)
		return (0);
	while (s1[i] != '\0')
	{
		a[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		a[j] = s2[i];
		i++;
		j++;
	}
	a[j] = '\0';
	return (a);
}
