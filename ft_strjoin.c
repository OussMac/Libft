/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <oimzilen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:40:58 by oimzilen          #+#    #+#             */
/*   Updated: 2024/11/11 18:23:31 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	ptr = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (ptr == NULL)
		return (NULL);
	i = -1;
	while (++i < ft_strlen(s1))
	{
		ptr[i] = s1[i];
	}
	j = -1;
	while (++j < ft_strlen(s2))
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return ((ptr));
}
