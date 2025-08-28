/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:03:15 by hadalici          #+#    #+#             */
/*   Updated: 2024/10/24 11:36:04 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*a;

	a = (char *)s;
	i = 0;
	while (*a)
	{
		if (*a == (char)c)
			return ((char *)a);
		a++;
	}
	if (*a == (char)c)
		return (a);
	return (NULL);
}
