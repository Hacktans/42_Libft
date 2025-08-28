/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:02:55 by hadalici          #+#    #+#             */
/*   Updated: 2024/10/26 17:23:27 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*a;

	a = dest;
	if (!src && !dest)
		return (NULL);
	if (src < dest)
	{
		src += n;
		dest += n;
		while (n--)
			*(char *)--dest = *(const char *)--src;
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (a);
}
