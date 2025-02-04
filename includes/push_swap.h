/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:47:06 by tabuayya          #+#    #+#             */
/*   Updated: 2025/02/04 21:33:12 by tasnimsamer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../ft_lib/includes/libft.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
typedef struct s_stack
{
    int data;
    int index;
    struct s_stack *next;
} t_stack;

int main(int argc, char **argv);
t_stack *new_node(int value);
void stack_init(t_stack **a, int num);
int check_duplicates(t_stack *a, int num);
int check_elements(char *argv);
void is_sorted(t_stack *node);
void push(t_stack **a, t_stack **b);
void swap(t_stack **a);
void rotate(t_stack **stack);
void swap_a(t_stack **a);
void push_a(t_stack **a, t_stack **b);
void rotate_a(t_stack **stack);

#endif