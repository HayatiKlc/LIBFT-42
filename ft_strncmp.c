/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:26:27 by hkilic            #+#    #+#             */
/*   Updated: 2022/02/11 15:21:05 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	x;

	if (n == 0)
		return (0);
	x = 0;
	while (x < n)
	{
		if (str1[x] && str1[x] == str2[x])
		{
			while (str1[x] && str1[x] == str2[x] && x < n)
				x++;
		}
		else
			return ((unsigned char)str1[x] - (unsigned char)str2[x]);
	}
	return (0);
}
