/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <oimzilen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:43:17 by oimzilen          #+#    #+#             */
/*   Updated: 2024/11/16 17:57:59 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *s, char c)
{
	size_t	wc;
	size_t	i;

	wc = 0;
	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			wc++;
		while (s[i] != c && s[i])
			i++;
	}
	return (wc);
}

static void	*lst_free(char **lst, size_t j)
{
	while (j > 0)
	{
		free(lst[--j]);
	}
	free(lst);
	return (NULL);
}

static int	fill_word(const char *s, size_t i, char c, size_t *start)
{
	while (s[i] == c)
		i++;
	if (s[i])
		*start = i;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		start;
	char		**lst;

	if (!s)
		return (NULL);
	lst = (char **) malloc ((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		i = fill_word(s, i, c, &start);
		if (s[i] || s[i - 1] != c)
		{
			lst[j] = ft_substr(s, start, i - start);
			if (lst[j] == NULL)
				return (lst_free(lst, j));
			j++;
		}
	}
	lst[j] = NULL;
	return (lst);
}
