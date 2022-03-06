/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:20:43 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/25 16:19:26 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (len < n - 1 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}
	if (*src)
	{
		while (*src)
		{
			len++;
			src++;
		}
	}
	*dest = '\0';
	return (len);
}
