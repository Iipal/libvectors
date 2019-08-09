/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_dot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:17:59 by tmaluh            #+#    #+#             */
/*   Updated: 2019/08/09 11:48:50 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvectors.h"

double_t	v_dot(__v4df const v1, __v4df const v2)
{
	return (X(v1) * X(v2) + Y(v1) * Y(v2) + Z(v1) * Z(v2));
}
