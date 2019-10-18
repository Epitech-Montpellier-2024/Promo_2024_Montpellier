/*
** EPITECH PROJECT, 2019
** CPool_workshoplib_2019
** File description:
** test_lib
*/
#include "my.h"

#include <criterion/criterion.h>

Test(my_str_isnum, return_1)
{
    int i = 0;
    char str[] = "23456754323456787654";
    i = my_str_isnum(str);

    cr_assert_eq(i, 1);
}

Test(my_str_isnum, return_0_nummaj)
{
    int i = 0;
    char str[] = "12345SDFGX";
    
    i = my_str_isnum(str);
    cr_assert_eq(i, 0);
}

Test(my_str_isnum, return_1_numspace)
{
    int i = 0;
    char str[] = "12345 123456";

    i = my_str_isnum(str);
    cr_assert_eq(i, 1);
}

Test(my_str_isnum, return_0_maj_space)
{
    int i = 0;
    char str[] = "dzdzce CZEVRE";

    i = my_str_isnum(str);
    cr_assert_eq(i, 0);
}
