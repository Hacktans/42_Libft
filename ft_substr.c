/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:01:26 by hadalici          #+#    #+#             */
/*   Updated: 2024/10/24 12:32:18 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
	{
		a = (char *)malloc(sizeof(char) * 1);
		if (!a)
			return (0);
		a[0] = '\0';
		return (a);
	}
	if (len > s_len - start)
		len = s_len - start;
	a = malloc((len + 1) * sizeof(char));
	if (!a)
		return (0);
	while (i < len)
		a[i++] = s[start++];
	a[i] = '\0';
	return (a);
}
