/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <oimzilen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:42:00 by oimzilen          #+#    #+#             */
/*   Updated: 2024/11/16 17:58:36 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_isset(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	ft_checking(size_t *i, size_t *j, const char *s1, const char *set)
{
	while (s1[*i])
	{
		if (ft_isset((const char)s1[*i], set))
			*i += 1;
		else
			break ;
	}
	*j = ft_strlen(s1) - 1;
	while (*j > 0)
	{
		if (ft_isset((const char)s1[*j], set))
			*j -= 1;
		else
			break ;
	}
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*tmp;
	size_t	i;
	size_t	j;
	size_t	n;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	ft_checking(&i, &j, s1, set);
	if (j == 0 && i == ft_strlen(s1))
		return (ft_strdup(""));
	len = (j - i) + 1;
	tmp = (char *) malloc(((len) + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	n = 0;
	while (n < (len))
	{
		tmp[n] = s1[n + i];
		n++;
	}
	tmp[n] = '\0';
	return (tmp);
}
