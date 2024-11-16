/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oimzilen <oimzilen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:29:50 by oimzilen          #+#    #+#             */
/*   Updated: 2024/11/16 17:58:16 by oimzilen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	lba9i;
	size_t	i;

	srclen = ft_strlen(src);
	if (dstsize == 0 && !dst)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		dstlen = dstsize;
	if (dstlen == dstsize)
		return (srclen + dstsize);
	i = 0;
	if (src[i] == '\0')
		return (dstlen);
	lba9i = dstsize - dstlen - 1;
	while (i < lba9i && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return ((dstlen + srclen));
}
