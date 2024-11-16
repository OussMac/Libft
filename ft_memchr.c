/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <oimzilen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:28:02 by oimzilen          #+#    #+#             */
/*   Updated: 2024/11/16 17:57:09 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	a;
	char	*str;

	i = 0;
	a = (char) c;
	str = (char *) s;
	while (i < n)
	{
		if (str[i] == a)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
