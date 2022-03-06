/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:56:58 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/25 16:17:45 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t n)
{
	size_t	len;

	len = 0;
	while (*dest)
	{
		dest++;
		len++;
	}
	if (!(len < n))
		return (ft_strlen(src) + n);
	while (len < n - 1 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}
	*dest = '\0';
	return (len + ft_strlen(src));
}
