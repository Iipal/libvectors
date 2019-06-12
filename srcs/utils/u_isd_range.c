/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_isd_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 21:34:16 by tmaluh            #+#    #+#             */
/*   Updated: 2019/06/12 17:13:57 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvectors.h"

inline bool	u_isd_range(double_t x,
				const double_t max_range,
				const double_t min_range)
{
	if (max_range < x || min_range > x)
		return (false);
	return (true);
}
