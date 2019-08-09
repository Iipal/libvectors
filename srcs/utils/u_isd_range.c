/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_isd_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 21:34:16 by tmaluh            #+#    #+#             */
/*   Updated: 2019/08/09 11:49:25 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvectors.h"

bool	u_isd_range(double_t const x,
			double_t const max_range,
			double_t const min_range)
{
	if (max_range < x || min_range > x)
		return (false);
	return (true);
}
