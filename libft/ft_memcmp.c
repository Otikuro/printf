/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:20:57 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/16 13:11:48 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*arr1;
	const unsigned char	*arr2;

	i = 0;
	arr1 = (const unsigned char *)s1;
	arr2 = (const unsigned char *)s2;
	while ((i < n) && (arr1[i] == arr2[i]))
		i++;
	if (i == n)
		return (0);
	return (arr1[i] - arr2[i]);
}
