/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:57:20 by pnimwata          #+#    #+#             */
/*   Updated: 2022/02/28 13:55:14 by pnimwata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_log10(unsigned int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

size_t	size_of_c_nbr(int n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		size += ft_log10(-n) + 1;
	else
		size += ft_log10(n);
	return (size);
}

char	*ft_itoa(int n)
{
	char			*new_s;
	size_t			size;
	unsigned int	abs_n;

	size = size_of_c_nbr(n);
	abs_n = n;
	if (n < 0)
	{
		abs_n = (n * -1);
	}
	new_s = (char *)ft_calloc(size + 1, sizeof (char));
	if (!new_s)
		return (0);
	new_s += size + 1;
	*(--new_s) = '\0';
	*(--new_s) = '0' + (abs_n % 10);
	abs_n /= 10;
	while (abs_n != 0)
	{
		*(--new_s) = '0' + (abs_n % 10);
		abs_n /= 10;
	}
	if (n < 0)
		*(--new_s) = '-';
	return (new_s);
}
