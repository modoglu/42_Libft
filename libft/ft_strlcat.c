/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmodogl <rootkalixox@gmail.42kocaeli.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:20:25 by emmodogl          #+#    #+#             */
/*   Updated: 2023/07/10 13:42:30 by emmodogl         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_size;
	size_t	src_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	j = dst_size;
	if (size == 0 || size <= dst_size)
		return (src_size + size);
	while (src[i] && i < size - dst_size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = 0;
	return (dst_size + src_size);
}
