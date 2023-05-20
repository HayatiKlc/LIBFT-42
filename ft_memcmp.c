/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:56:33 by hkilic            #+#    #+#             */
/*   Updated: 2022/02/12 17:59:34 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		if (*((unsigned char *)s1 + x) == *((unsigned char *)s2 + x))
			x++;
		else
			return ((*((unsigned char *)s1 + x)) - *((unsigned char *)s2 + x));
	}
	return (0);
}
