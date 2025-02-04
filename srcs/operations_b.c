/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:10:40 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/04 21:36:13 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_b(t_stack **b)
{
        ft_printf("sb\n");
        swap(b);
}
void push_b(t_stack **b, t_stack **a)
// takes from a and pushes into b
{
        ft_printf("pb\n");
        push(b, a);
}
void rotate_b(t_stack **b)
{
        ft_printf("rb\n");
        rotate(b);
}
