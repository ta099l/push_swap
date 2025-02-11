/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:17:29 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/11 12:18:07 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void radix_sort(t_stack **a, t_stack **b)
{
	give_index(*a);
	switch_values(*a);
	do_radix_sort(a, b);
}

int	stack_size(t_stack *a)
{
	t_stack	*temp;
	int		size;

	size = 0;
	temp = a;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}

int	find_max_bits(t_stack *a)
{
	t_stack	*temp;
	int		max;
	int		x;

	if (!a)
		return (0);
	temp = a;
	max = temp->data;
	x = 0;
	while (temp)
	{
		if (temp->data > max)
			max = temp->data;
		temp = temp->next;
	}
	while (max >> x)
		x++;
	return (x);
}

void	give_index(t_stack *a)
{
	t_stack	*temp;
	t_stack	*temp2;
	int		index;

	temp = a;
	temp2 = a;
	while (temp2)
	{
		index = 0;
		temp = a;
		while (temp)
		{
			if (temp->data < temp2->data)
				index++;
			temp = temp->next;
		}
		temp2->index = index;
		temp2 = temp2->next;
	}
}

void	do_radix_sort(t_stack **a, t_stack **b)
{
	int		max_bits;
	int		x;
	int		y;
	int		size;

	give_index(*a);
	switch_values(*a);
	max_bits = find_max_bits(*a);
	x = 0;
	size = stack_size(*a);
	while (x < max_bits)
	{
		y = 0;
		while (y < size)
		{
			if ((((*a)->data >> x) & 1) == 1)
				rotate_a(a);
			else
				push_b(b, a);
			y++;
		}
		while (stack_size(*b) > 0)
			push_a(a, b);
		x++;
	}
}