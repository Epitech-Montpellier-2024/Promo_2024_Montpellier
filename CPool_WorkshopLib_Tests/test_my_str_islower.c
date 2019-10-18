/*
** EPITECH PROJECT, 2019
** test_my_str_islower
** File description:
** Tests for my_str_islower
*/

#include <criterion/criterion.h>

int my_str_islower(char *);

Test(my_str_islower, should_return_1_full_low)
{
    int ret = my_str_islower("efkuzefbjkpjrgbjzefjio");
    cr_assert_eq(ret, 1);
}

Test(my_str_islower, should_return_0_full_maj)
{
    int ret = my_str_islower("AEJDDBDZOZDNZDZDP");
    cr_assert_eq(ret, 0);
}

Test(my_str_islower, should_return_0_mix)
{
    int ret = my_str_islower("efkuzefbjkpADJHDBDjrgbjzefjio");
    cr_assert_eq(ret, 0);
}

Test(my_str_islower, should_return_0_non_alpha_chars)
{
    int ret = my_str_islower("efkuzefbjk({(((%ddodozdjzd");
    cr_assert_eq(ret, 0);
}

Test(my_str_islower, should_return_0_only_non_alpha_chars)
{
    int ret = my_str_islower("{|((((2484204924");
    cr_assert_eq(ret, 0);
}

Test(my_str_islower, should_return_1_empty)
{
    int ret = my_str_islower("");
    cr_assert_eq(ret, 1);
}