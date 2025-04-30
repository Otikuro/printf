/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:13:54 by juamanri          #+#    #+#             */
/*   Updated: 2025/04/15 12:32:42 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_num_of_words(char const *s, char c)
{
	int	i;
	int	new_word;
	int	num_of_words;

	i = 0;
	new_word = 1;
	num_of_words = 0;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			new_word = 1;
		else if (new_word == 1)
		{
			num_of_words++;
			new_word = 0;
		}
		i++;
	}
	return (num_of_words);
}

int	ft_get_word_len(char const *s, char c, int num_of_word)
{
	int	i;
	int	word_len;
	int	current_word;

	i = 0;
	word_len = 0;
	current_word = 0;
	while (s[i] == c)
		i++;
	while (current_word < num_of_word)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		current_word++;
	}
	while (s[i] == c)
		i++;
	while (s[i + word_len] && s[i + word_len] != c)
		word_len++;
	return (word_len);
}

void	ft_fill_array(char const *s, char c, int num_of_words, char **arr)
{
	int	current_word;
	int	i;
	int	j;

	current_word = 0;
	i = 0;
	while (current_word < num_of_words)
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			arr[current_word][j] = s[i];
			i++;
			j++;
		}
		arr[current_word][j] = '\0';
		current_word++;
	}
	arr[current_word] = 0;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		num_of_words;
	char	**arr;

	i = 0;
	num_of_words = ft_get_num_of_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (num_of_words + 1));
	if (!arr)
		return (0);
	while (i < num_of_words)
	{
		arr[i] = (char *)malloc(sizeof(char) * (ft_get_word_len(s, c, i) + 1));
		if (!arr[i])
		{
			while (i >= 0)
				free(arr[i--]);
			free(arr);
			return (0);
		}
		i++;
	}
	ft_fill_array(s, c, num_of_words, arr);
	return (arr);
}
