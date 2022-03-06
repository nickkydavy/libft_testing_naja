/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:45:12 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/25 13:26:44 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	if (s == 0 || f == 0)
		return (0);
	i = 0;
	new_s = ft_strdup(s);
	while (new_s[i])
	{
		new_s[i] = (*f)(i, new_s[i]);
		i++;
	}
	return (new_s);
}
