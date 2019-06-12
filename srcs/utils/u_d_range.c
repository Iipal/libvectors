/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_d_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:56:24 by tmaluh            #+#    #+#             */
/*   Updated: 2019/06/12 17:13:46 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvectors.h"

inline double_t	u_d_range(double_t x,
					const double_t max_range,
					const double_t min_range)
{
	if (max_range < x)
		return (max_range);
	if (min_range > x)
		return (min_range);
	return (x);
}
