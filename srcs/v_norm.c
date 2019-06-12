/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_norm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 22:34:31 by tmaluh            #+#    #+#             */
/*   Updated: 2019/06/12 17:28:09 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvectors.h"

inline __v4df	v_norm(const __v4df v)
{
	const double_t	sqrtvdv = sqrt(v_dot(v, v));

	return ((__v4df){X(v) / sqrtvdv, Y(v) / sqrtvdv, Z(v) / sqrtvdv, 0.0});
}
