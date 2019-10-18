/*
** EPITECH PROJECT, 2019
** my_find_prime_sup_test
** File description:
** Makes Unit_tests of my_find_prime_sup.c
*/

#include <criterion/criterion.h>

int my_find_prime_sup(int nb);

Test(my_find_prime_sup, zero_is_not_a_prime_number)
{
    int nb = my_find_prime_sup(0);
    cr_assert_eq(nb, 2);
}

Test(my_find_prime_sup, one_is_not_a_prime_number)
{
    int nb = my_find_prime_sup(1);
    cr_assert_eq(nb, 2);
}

Test(my_find_prime_sup, it_is_a_prime_number)
{
    int nb = my_find_prime_sup(600);
    cr_assert_eq(nb, 601);
}

Test(my_find_prime_sup, five_is_a_prime_number)
{
    int nb = my_find_prime_sup(-563);
    cr_assert_eq(nb, 2);
}