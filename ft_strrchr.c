/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:13:35 by hadalici          #+#    #+#             */
/*   Updated: 2024/10/21 19:55:28 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = 0;
	while (*s)
	{
		if (*s == (char)c)
			a = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (a);
}
