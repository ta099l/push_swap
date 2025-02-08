/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:54:13 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/09 00:11:08 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack *node)
{
        if (!node)
                ft_free_stack(&node);
        while (node->next)
        {
                if (node->data > node->next->data)
                        return (0);
                node = node->next;
        }
        return (1);
}
int check_elements(char *argv)
{
        if (*argv == '-' || *argv == '+')
                argv++;
        while (*argv)
        {
                if ((*argv > '9' || *argv < '0'))
                {
                        write(2, "Error\n", 6);
                        exit (0); // function
                }
                argv++;
        }
        return (1);
}
int check_duplicates(t_stack *a, t_stack **b, int num)
{
        while (a)
        {
                if (a->data == num)
                {
                        error_free(a, b); // function
                }
                a = a->next;
        }
        return (1);
}