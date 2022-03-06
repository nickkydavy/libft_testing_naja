/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:17:21 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/28 14:38:40 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	char	*new_s;
	size_t	i;

	new_s = (char *)ft_calloc((ft_strlen(s) + 1), sizeof (char));
	i = 0;
	while (i < (ft_strlen(s) + 1))
	{
		*(new_s + i) = *(s + i);
		i++;
	}
	return (new_s);
}
