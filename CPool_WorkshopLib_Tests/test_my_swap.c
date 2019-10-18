/*
** EPITECH PROJECT, 2019
** test criterion my swap
** File description:
** .C
*/
#include "my.h"
#include <criterion/criterion.h>

Test(my_swap, should_reverse_character)
{
    int a[] = {1};
    int b[] = {2};
    my_swap(a, b);
    cr_assert_eq(*a, 2);
    cr_assert_eq(*b , 1);    
}

Test(my_swap, should_reverse_character_eq)
{
    int a[] = {1};
    int b[] = {1};
    my_swap(a, b);
    cr_assert_eq(*a, 1);
    cr_assert_eq(*b , 1);    
}

Test(my_swap, should_reverse_character_dif)
{
    int a[] = {16564668};
    int b[] = {15424957};
    my_swap(a, b);
    cr_assert_eq(*a, 15424957);
    cr_assert_eq(*b , 16564668);    
}