/*
** EPITECH PROJECT, 2019
** test_my_print_isalpha
** File description:
** Guillaume/Matthieu
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_str_isalpha (char const * str);

Test (my_str_isalpha, should_print_empty_string)
{
    int result = my_str_isalpha ("");
    cr_assert_eq (result, 1);
}

Test (my_str_isalpha, should_print_alpha_string)
{
    int result = my_str_isalpha ("hello");
    cr_assert_eq (result, 1);
}

Test (my_str_isalpha, should_print_no_alpha_string)
{
    int result = my_str_isalpha ("hello/");
    cr_assert_eq (result, 0);
}