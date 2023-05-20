/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:27:36 by hkilic            #+#    #+#             */
/*   Updated: 2022/02/18 13:24:52 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t say, size_t size)
{
	void	*res;

	res = (void *)malloc(size * say);
	if (!(res))
		return (NULL);
	ft_bzero(res, size * say);
	return (res);
}
