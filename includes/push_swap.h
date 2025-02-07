/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimsamer <tasnimsamer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:47:06 by tabuayya          #+#    #+#             */
/*   Updated: 2025/02/07 13:52:25 by tasnimsamer      ###   ########.fr       */
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
int is_sorted(t_stack *node);
void push(t_stack **a, t_stack **b);
void swap(t_stack **a);
void rotate(t_stack **stack);
void reverse_rotate(t_stack **stack);
void swap_a(t_stack **a);
void push_a(t_stack **a, t_stack **b);
void rotate_a(t_stack **stack);
void reverse_rotate_a(t_stack **a);
void swap_b(t_stack **b);
void push_b(t_stack **b, t_stack **a);
void rotate_b(t_stack **b);
void reverse_rotate_b(t_stack **b);
void swap_ab(t_stack **a, t_stack **b);
void rotate_ab(t_stack **a, t_stack **b);
void sort_two(t_stack **stack);
void sort_three(t_stack **stack);
void sort_four(t_stack **a, t_stack **b);
void sort_five(t_stack **a, t_stack **b);
void give_index(t_stack *a);
void switch_values(t_stack *a);
void do_radix_sort(t_stack **a, t_stack **b);
int find_max_bits(t_stack *a);
int stack_size(t_stack *a);
void radix_sort(t_stack **a, t_stack **b);
int find_min(t_stack *a);
void push_min(t_stack **a, t_stack **b);
void ft_free_stack(t_stack **stack);
void ft_exit(t_stack **a, t_stack **b);
void sort_list(t_stack **a, t_stack **b, int argc);
int ft_atol(char *nptr);

#endif