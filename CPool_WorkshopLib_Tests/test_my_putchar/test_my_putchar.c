/*
** EPITECH PROJECT, 2019
** test_my_putchar.c
** File description:
** test criterion of my_putchar.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void    my_putchar(char c);

Test(my_putchar, should_print_A_into_stdout)
{
    cr_redirect_stdout();
    my_putchar('A');
    cr_assert_stdout_eq_str("A");
}

Test(my_putchar, should_print_Hello_into_stdout)
{
    cr_redirect_stdout();
    my_putchar('H');
    my_putchar('e');
    my_putchar('l');
    my_putchar('l');
    my_putchar('o');
    cr_assert_stdout_eq_str("Hello");
}

Test(my_putchar, should_print_non_printable_char_into_stdout)
{
    cr_redirect_stdout();
    my_putchar('\a');
    cr_assert_stdout_eq_str("\a");
}

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
