/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:36:59 by pnimwata          #+#    #+#             */
/*   Updated: 2022/03/01 22:31:19 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	i_trim(char const *s, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_strchr(set, *(s + i)) != 0 && i < end)
		i++;
	start = i;
	if (i == end)
		return (0);
	i = end;
	while (ft_strchr(set, *(s + i)) != 0 && i >= start)
		i--;
	end = i + 1;
	return (end - start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	size_t	size;
	size_t	i;

	size = i_trim(s1, set);
	if (size == 0 || !*s1)
	{
		new_s = ft_strdup("");
		return (new_s);
	}
	i = 0;
	new_s = 0;
	while (*(s1 + i))
	{
		if (ft_strchr(set, *(s1 + i)) == 0)
		{
			new_s = ft_substr(s1, i, size);
			break ;
		}
		i++;
	}
	return (new_s);
}
