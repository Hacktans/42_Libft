/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadalici <hadalici@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:03:10 by hadalici          #+#    #+#             */
/*   Updated: 2024/10/26 17:18:53 by hadalici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *a, char b)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	if (a[0] == '\0')
		return (0);
	while (a[i] != '\0')
	{
		while (a[i] == b && a[i] != '\0')
			i++;
		if (a[i] != '\0')
		{
			word++;
			while (a[i] != b && a[i] != '\0')
				i++;
		}
	}
	return (word);
}

char	**ft_split(char *s, char c)
{
	char	**result;
	int		i;
	size_t	start;
	int		re;
	size_t	end;

	i = 0;
	re = 0;
	result = malloc (sizeof(char *) * (count_word(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (end > start)
			result[re++] = ft_substr(s, start, end - start);
	}
	result[re] = (NULL);
	return (result);
}
