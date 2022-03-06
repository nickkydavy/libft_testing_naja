/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:25:20 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/28 14:31:34 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;
	size_t	length;

	length = len;
	if (start > ft_strlen(s))
		length = 0;
	else if (length > ft_strlen(s) - start)
		length = ft_strlen(s) - start;
	new_s = (char *)malloc(length + 1 * sizeof (char));
	i = 0;
	if (!new_s)
		return (0);
	while (i < length)
	{
		*(new_s + i) = *(s + start + i);
		i++;
	}
	*(new_s + i) = '\0';
	return (new_s);
}
