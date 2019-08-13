/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvectors.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 12:16:52 by tmaluh            #+#    #+#             */
/*   Updated: 2019/08/13 10:14:10 by tmaluh           ###   ########.fr       */
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
#  include <emmintrin.h>
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

# ifndef __lvec_always_inline
#  define __lvec_always_inline static __always_inline
# endif

__lvec_always_inline double_t
v_dot(__v4df const v1, __v4df const v2)
{
	return X(v1) * X(v2) + Y(v1) * Y(v2) + Z(v1) * Z(v2);
}

__lvec_always_inline double_t
v_len(__v4df const v)
{
	return sqrt(v_dot(v, v));
}

__lvec_always_inline __v4df
v_norm(__v4df const v)
{
	double_t const	vlen = v_len(v);
	return (__v4df){X(v) / vlen, Y(v) / vlen, Z(v) / vlen, 0.0};
}

__lvec_always_inline __v4df
v_mul_d(__v4df const v, double_t const d)
{
	return (__v4df){X(v) * d, Y(v) * d, Z(v) * d, 0.0};
}
__lvec_always_inline __v4df
v_add_d(__v4df const v, double_t const d)
{
	return (__v4df){X(v) + d, Y(v) + d, Z(v) + d, 0.0};
}
__lvec_always_inline __v4df
v_sub_d(__v4df const v, double_t const d)
{
	return (__v4df){X(v) - d, Y(v) - d, Z(v) - d, 0.0};
}
__lvec_always_inline __v4df
v_div_d(__v4df const v, double_t const d)
{
	return (__v4df){X(v) / d, Y(v) / d, Z(v) / d, 0.0};
}

__lvec_always_inline __v4df
v_mul_v(__v4df const a, __v4df const b)
{
	return a * b;
}
__lvec_always_inline __v4df
v_add_v(__v4df const a, __v4df const b)
{
	return a + b;
}
__lvec_always_inline __v4df
v_sub_v(__v4df const a, __v4df const b)
{
	return a - b;
}
__lvec_always_inline __v4df
v_div_v(__v4df const a, __v4df const b)
{
	return a / b;
}

__lvec_always_inline __v4df
v_invert(__v4df const v)
{
	return -v;
}

/*
**	u_ prefix is short name for utils.
*/
__lvec_always_inline bool
u_vec_range(__v4df const v,
			double_t const max_range,
			double_t const min_range)
{
	if (max_range < X(v) || max_range < Y(v) || max_range < Z(v))
		return false;
	if (min_range > X(v) || min_range > Y(v) || min_range > Z(v))
		return false;
	return true;
}
__lvec_always_inline bool
u_isd_range(double_t const x,
			double_t const max_range,
			double_t const min_range)
{
	if (max_range < x || x < min_range)
		return false;
	return true;
}
__lvec_always_inline double_t
u_d_range(double_t const x,
		double_t const max_range,
		double_t const min_range)
{
	if (max_range < x)
		return max_range;
	if (min_range > x)
		return min_range;
	return x;
}

#endif
