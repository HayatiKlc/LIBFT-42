/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:00:23 by hkilic            #+#    #+#             */
/*   Updated: 2022/02/12 18:06:10 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *saman, const char *igne, size_t len)
{
	size_t	i;
	size_t	j;

	if (igne[0] == 0)
		return ((char *)saman);
	i = 0;
	while (saman[i] && i < len)
	{
		j = 0;
		while (saman[i + j] == igne[j] && i + j < len)
		{
			j++;
			if (igne[j] == 0)
				return ((char *)saman + i);
		}
		i++;
	}
	return (0);
}
