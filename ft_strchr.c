/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:40:44 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/28 15:01:53 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	size_t	i;

	i = 0;
	if (*(s + i) == (char)c)
		return ((char *)(s + i));
	while (*(s + i) != '\0')
	{
		i++;
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
	}
	return (0);
}
