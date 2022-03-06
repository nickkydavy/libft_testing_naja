/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:14:49 by pnimwata          #+#    #+#             */
/*   Updated: 2022/03/01 15:42:58 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*arr_split(char const *s, char c)
{
	char	*arr;
	int		size;

	size = 0;
	while (*(s + size) != c && *(s + size))
		size++;
	arr = ft_substr(s, 0, size);
	return (arr);
}

int	count_arr_to_split(char const *s, char c)
{
	int	size;

	size = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		while (*s != c && *s)
			s++;
		if (*s == c)
			size++;
		else if (*s == '\0')
		{
			size++;
			break ;
		}
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**new_arr_s;
	size_t	quan_arr;
	size_t	new_arr_i;
	char	*temp;

	quan_arr = count_arr_to_split(s, c);
	new_arr_s = (char **)malloc ((quan_arr + 1) * sizeof (char *));
	if (!new_arr_s)
		return (0);
	new_arr_i = 0;
	new_arr_s[quan_arr] = 0;
	temp = (char *)s;
	while (new_arr_i < quan_arr)
	{
		while (*temp == c && *temp)
			temp++;
		new_arr_s[new_arr_i] = arr_split(temp, c);
		new_arr_i++;
		temp += ft_strlen(new_arr_s[new_arr_i - 1]);
	}
	return (new_arr_s);
}
