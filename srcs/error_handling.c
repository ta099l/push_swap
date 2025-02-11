/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:54:13 by tasnimsamer       #+#    #+#             */
/*   Updated: 2025/02/11 13:44:01 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack *node)
{
        if (!node)
        {
                ft_free_stack(&node);
                exit(1);
        }
        while (node->next)
        {
                if (node->data > node->next->data)
                        return (0);
                node = node->next;
        }
        return (1);
}
int check_elements(char *argv, t_stack **a)
{
        if (*argv == '-' || *argv == '+')
                argv++;
        while (*argv)
        {
                if ((*argv > '9' || *argv < '0'))
                {
                        error_free(a, NULL);
                        return (0);
                }
                argv++;
        }
        return (1);
}
int check_duplicates(t_stack *a, int num)
{
        t_stack *temp;
        
        temp = a;
        while (temp)
        {
                if (temp->data == num)
                {
                        error_free(&a, NULL);
                }
                temp = temp->next;
        }
        return (1);
}