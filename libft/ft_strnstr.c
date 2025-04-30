/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:44:09 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/16 17:09:11 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	haystack_len;
	size_t	needle_len;

	i = 0;
	haystack_len = ft_strlen(big);
	needle_len = ft_strlen(little);
	if (len < 0)
		len = haystack_len;
	if (needle_len == 0)
		return ((char *)big);
	while (big[i] && (i < len))
	{
		j = 0;
		if (big[i] == little[0])
		{
			while (((i + j) < len) && big[i + j] == little[j])
				j++;
			if (j >= needle_len)
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
