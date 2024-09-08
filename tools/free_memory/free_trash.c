/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_trash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohammou- <ohammou-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:14:31 by ohammou-          #+#    #+#             */
/*   Updated: 2024/09/05 19:23:46 by ohammou-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void    del(void *add)
{
    free(add);
}

void    free_trash(t_list **trash)
{
    ft_lstclear(trash, del);
}