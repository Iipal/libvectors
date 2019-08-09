/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvectors.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 12:16:52 by tmaluh            #+#    #+#             */
/*   Updated: 2019/08/09 11:51:42 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVECTORS_H
# define LIBVECTORS_H

# include <math.h>
# include <stdint.h>
# include <stdbool.h>

# if defined __APPLE__
#  include <immintrin.h>
# else
#  include <stddef.h>
#  define V4DF typedef double __v4df __attribute__((vector_size(32),aligned))
#  define V4DU typedef size_t __v4du __attribute__((vector_size(32),aligned))

V4DF;
V4DU;
# endif

# define X(v) (v)[0]
# define Y(v) (v)[1]
# define Z(v) (v)[2]
# define W(v) (v)[3]

# define VDISC(a, b, c) ((b) * (b) - 4.0 * (a) * (c))

double_t	v_len(__v4df const v);
double_t	v_dot(__v4df const v1, __v4df const v2);

__v4df		v_norm(__v4df const v);

__v4df		v_mul_d(__v4df const v, double_t const d);
__v4df		v_add_d(__v4df const v, double_t const d);
__v4df		v_sub_d(__v4df const v, double_t const d);
__v4df		v_div_d(__v4df const v, double_t const d);

__v4df		v_mul_v(__v4df const a, __v4df const b);
__v4df		v_add_v(__v4df const a, __v4df const b);
__v4df		v_sub_v(__v4df const a, __v4df const b);
__v4df		v_div_v(__v4df const a, __v4df const b);

__v4df		v_invert(__v4df const v);

/*
**	u_ prefix is short name for utils.
*/
bool		u_vec_range(__v4df const v,
					double_t const max_range,
					double_t const min_range);
bool		u_isd_range(double_t const a,
					double_t const max_range,
					double_t const min_range);
double_t	u_d_range(double_t const x,
					double_t const max_range,
					double_t const min_range);

#endif
