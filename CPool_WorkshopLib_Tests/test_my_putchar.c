/*
** EPITECH PROJECT, 2019
** test_my_putchar.c
** File description:
** test criterion of my_putchar.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void    my_putchar(char c);

Test(putchar_test, should_print_space_char)
{
    cr_redirect_stdout();
    my_putchar(' ');
    cr_assert_stdout_eq_str(" ");
}

Test(putchar_test, should_print_line_break)
{
    cr_redirect_stdout();
    my_putchar('\n');
    cr_assert_stdout_eq_str("\n");
}

Test(putchar_test, should_print_b)
{
    cr_redirect_stdout();
    my_putchar('b');
    cr_assert_stdout_eq_str("b");
}

Test(putchar_test, should_print_5)
{
    cr_redirect_stdout();
    my_putchar('5');
    cr_assert_stdout_eq_str("5");
}

Test(putchar_test, should_return_nothing)
{
    cr_redirect_stdout();
    my_putchar('\o');
    cr_assert_str_empty("");
}
