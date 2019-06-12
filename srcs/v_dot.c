/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_dot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:17:59 by tmaluh            #+#    #+#             */
/*   Updated: 2019/06/12 17:42:46 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvectors.h"

inline double_t	v_dot(const __v4df v1, const __v4df v2)
{
	return (X(v1) * X(v2) + Y(v1) * Y(v2) + Z(v1) * Z(v2));
}
