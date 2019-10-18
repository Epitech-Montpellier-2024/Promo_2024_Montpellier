/*
** EPITECH PROJECT, 2019
** my_compute_power_rec_test
** File description:
** yo
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_compute_power_rec(int n, int pow);

Test(my_compute_power_rec, should_return_0_power_1)
{
    cr_redirect_stdout();
    int number = 0;
    int power = 1;
    int result = my_compute_power_rec(number, power);
    cr_assert_eq(0, result);
}

Test(my_compute_power_rec, should_return_0)
{
    cr_redirect_stdout();
    int number = 10;
    int power = -4;
    int result = my_compute_power_rec(number, power);
    cr_assert_eq(0, result);
}

Test(my_compute_power_rec, should_return_2_power_32)
{
    cr_redirect_stdout();
    int number = 2;
    int power = 32;
    int result = my_compute_power_rec(number, power);
    cr_assert_eq(0, result);
}

Test(my_compute_power_rec, should_return_3_power_6)
{
    cr_redirect_stdout();
    int number = 3;
    int power = 6;
    int result = my_compute_power_rec(number, power);
    cr_assert_eq(729, result);
}

Test(my_compute_power_rec, should_return_2401)
{
    cr_redirect_stdout();
    int number = -7;
    int power = 4;
    int result = my_compute_power_rec(number, power);
    cr_assert_eq(2401, result);
}

