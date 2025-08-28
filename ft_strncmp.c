/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:03:26 by hadalici          #+#    #+#             */
/*   Updated: 2024/10/21 19:52:28 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while ((s1[a] || s2[a]) && a < n)
	{
		if ((unsigned char)s1[a] > (unsigned char)s2[a])
			return (1);
		if ((unsigned char)s1[a] < (unsigned char)s2[a])
			return (-1);
		a++;
	}
	return (0);
}
