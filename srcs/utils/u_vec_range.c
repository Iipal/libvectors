/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_vec_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 12:22:50 by tmaluh            #+#    #+#             */
/*   Updated: 2019/08/09 11:49:42 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvectors.h"

bool	u_vec_range(__v4df const v,
			double_t const max_range,
			double_t const min_range)
{
	if (max_range < X(v) || max_range < Y(v) || max_range < Z(v))
		return (false);
	if (min_range > X(v) || min_range > Y(v) || min_range > Z(v))
		return (false);
	return (true);
}
