/*
** EPITECH PROJECT, 2019
** Unit test
** File description:
** unit test for my_compute_square_root
*/

#include <criterion/criterion.h>

int my_compute_square_root(int nb);

Test(my_compute_power_rec, should_return_square_root_of_64)
{
    int square = 64;
    int result = my_compute_square_root(square);
    cr_assert_eq(result, 8);
}

Test(my_compute_power_rec, should_return_0_with_0)
{
    int square = 0;
    int result = my_compute_square_root(square);
    cr_assert_eq(result, 0);
}

Test(my_compute_power_rec, should_return_0_with_5)
{
    int square = 5;
    int result = my_compute_square_root(square);
    cr_assert_eq(result, 0);
}
