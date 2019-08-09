/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_div_v.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:11:31 by tmaluh            #+#    #+#             */
/*   Updated: 2019/08/09 11:51:04 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvectors.h"

__v4df	v_div_v(__v4df const a, __v4df const b)
{
	return ((__v4df){X(a) / X(b), Y(a) / Y(b), Z(a) / Z(b), 0.0});
}
