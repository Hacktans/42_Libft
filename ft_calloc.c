/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:20:03 by hadalici          #+#    #+#             */
/*   Updated: 2024/10/24 12:31:24 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	char	*a;
	size_t	i;

	i = 0;
	a = malloc(size * count);
	if (!a)
		return (NULL);
	while (i < size * count)
		a[i++] = 0;
	return (a);
}
