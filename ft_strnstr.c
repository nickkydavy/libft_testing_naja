/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:11:11 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/25 16:44:19 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (*(little) == 0)
		return ((char *)big);
	i = 0;
	while (*(big + i) && i < n)
	{
		j = 0;
		if (*(big + i) == *(little + j))
		{
			while (i + j < n && *(little + j) != '\0')
			{
				if (*(big + i + j) == *(little + j))
					j++;
				else
					break ;
			}
			if (*(little + j) == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}
