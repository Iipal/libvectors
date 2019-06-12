/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvectors.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 12:16:52 by tmaluh            #+#    #+#             */
/*   Updated: 2019/06/12 17:07:28 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_VECTORS_H
# define LIBFT_VECTORS_H

# include <math.h>
# include <stdint.h>
# include <stdbool.h>

# if defined __APPLE__
#  include <immintrin.h>
# else
#  define V4DF typedef double_t __v4df __attribute__((vector_size(32),aligned))

V4DF;
# endif

# define X(v) v[0]
# define Y(v) v[1]
# define Z(v) v[2]
# define W(v) v[3]

# define VDISC(a, b, c) ((b) * (b) - 4.0 * (a) * (c))

extern double_t	v_len(const __v4df v);
extern double_t	v_dot(const __v4df v1, const __v4df v2);

extern __v4df	v_norm(const __v4df v);

extern __v4df	v_mul_d(const __v4df v, const double_t d);
extern __v4df	v_add_d(const __v4df v, const double_t d);
extern __v4df	v_sub_d(const __v4df v, const double_t d);
extern __v4df	v_div_d(const __v4df v, const double_t d);

extern __v4df	v_mul_v(const __v4df a, const __v4df b);
extern __v4df	v_add_v(const __v4df a, const __v4df b);
extern __v4df	v_sub_v(const __v4df a, const __v4df b);
extern __v4df	v_div_v(const __v4df a, const __v4df b);

extern __v4df	v_invert(const __v4df v);

/*
**	u_ prefix is short name for utils.
*/
extern bool		u_vec_range(__v4df v,
					const double_t max_range,
					const double_t min_range);
extern bool		u_isd_range(double_t a,
					const double_t max_range,
					const double_t min_range);
extern double_t	u_d_range(double_t x,
					const double_t max_range,
					const double_t min_range);

#endif
