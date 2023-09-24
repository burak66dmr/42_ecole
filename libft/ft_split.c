/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: budemir <budemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:09:36 by budemir           #+#    #+#             */
/*   Updated: 2022/12/16 15:12:15 by budemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int		word;
	int		i;

	word = 0;
	i = 0;
	if (!s)
		return (0);
	if (!s[0])
		return (0);
	if (s[i] != c)
	{
		i++;
		word++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			word++;
		i++;
	}
	return (word);
}

static char	*make_string(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		num_word;
	int		i;

	if (!s)
		return (0);
	i = 0;
	num_word = count_word(s, c);
	result = (char **)malloc(sizeof(char *) * (num_word + 1));
	if (!result)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			result[i] = make_string(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}
