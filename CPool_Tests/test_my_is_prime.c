/*
** EPITECH PROJECT, 2019
** my_is_prime_test
** File description:
** Makes Unit_tests of my_is_prime.c
*/

#include <criterion/criterion.h>

int my_is_prime(int nb);

Test(my_is_prime, zero_is_not_a_prime_number)
{
    int nb = my_is_prime(0);
    cr_assert_eq(nb, 0);
}

Test(my_is_prime, one_is_not_a_prime_number)
{
    int nb = my_is_prime(1);
    cr_assert_eq(nb, 0);
}

Test(my_is_prime, it_is_a_prime_number)
{
    int nb = my_is_prime(7789);
    cr_assert_eq(nb, 1);
}

Test(my_is_prime, it_is_not_prime_number)
{
    int nb = my_is_prime(172872);
    cr_assert_eq(nb, 0);
}

Test(my_is_prime, five_is_a_prime_number)
{
    int nb = my_is_prime(-563);
    cr_assert_eq(nb, 0);
}
