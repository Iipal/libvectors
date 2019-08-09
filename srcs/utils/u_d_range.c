/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_d_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:56:24 by tmaluh            #+#    #+#             */
/*   Updated: 2019/08/09 11:49:10 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvectors.h"

double_t	u_d_range(double_t const x,
				double_t const max_range,
				double_t const min_range)
{
	if (max_range < x)
		return (max_range);
	if (min_range > x)
		return (min_range);
	return (x);
}
