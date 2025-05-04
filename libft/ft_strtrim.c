/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:28:02 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/14 10:23:38 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_valid(char chr, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (chr == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (0);
	while (s1[start] && !ft_is_valid(s1[start], set))
		start++;
	while ((end > start) && !ft_is_valid(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(char) * ((end - start) + 2));
	if (!str)
		return (0);
	ft_strlcpy(str, &s1[start], (end - start + 2));
	return (str);
}
