/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_opt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:22:05 by ohammou-          #+#    #+#             */
/*   Updated: 2024/09/05 17:10:04 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void check_option(char *str)
{
    int i;

    i = ft_strlen(str);
    if (ft_strncmp(str + i - 4, ".cub", 5) != 0)
        exit(1);
}