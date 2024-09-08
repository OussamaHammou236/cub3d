/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_or_set_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:54:03 by ohammou-          #+#    #+#             */
/*   Updated: 2024/09/08 19:09:07 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

t_data	*data_global(t_data *data, int fg)
{
	static t_data	*data_gl;

	if (!fg)
		data_gl = data;
	return (data_gl);
}