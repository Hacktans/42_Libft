/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:02:44 by hadalici          #+#    #+#             */
/*   Updated: 2024/10/24 11:26:46 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int a)
{
	int	len;

	len = 0;
	if (a == 0 || a < 0)
		len++;
	while (a)
	{
		a = a / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		digit;
	long	nb;
	char	*a;

	nb = n;
	digit = len(n);
	a = malloc(1 + (digit * sizeof(char)));
	if (!a)
		return (NULL);
	if (n == 0)
		a[0] = '0';
	if (n < 0)
	{
		a[0] = '-';
		nb *= -1;
	}
	a[digit] = 0;
	while (nb)
	{
		a[--digit] = nb % 10 + 48;
		nb /= 10;
	}
	return (a);
}
