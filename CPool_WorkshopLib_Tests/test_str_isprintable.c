/*
** EPITECH PROJECT, 2019
** Test my_str_isprintable
** File description:
** Unit_Test
*/

#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(my_str_isprintable, test_nothin_in_string)
{
    char str[] = "";
    int result = my_str_isprintable(str);

    cr_assert_eq(result, 1);
}

Test(my_str_isprintable, test_all_printable_str)
{
    char str[] = "hello";
    int result = my_str_isprintable(str);

    cr_assert_eq(result, 1);
}

Test(my_str_isprintable, test_noprintable)
{
    char str[] = "\a";
    int result = my_str_isprintable(str);

    cr_assert_eq(result, 0);
}
Test(my_str_isprintable, test_with_space)
{
    char str[] = "hello world";
    int result = my_str_isprintable(str);

    cr_assert_eq(result, 1);
}