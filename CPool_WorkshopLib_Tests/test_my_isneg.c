/*
** EPITECH PROJECT2019
** test my_isneg
** File description:
** my_isneg tester
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_putchar(char c);
int my_isneg(int n);

Test (my_isneg, should_print_P)
{
    cr_redirect_stdout();
    my_isneg(0);
    cr_assert_stdout_eq_str("P");
}

Test (my_isneg, should_print_P2)
{
    cr_redirect_stdout();
    my_isneg(12);
    cr_assert_stdout_eq_str("P");
}

Test (my_isneg, should_print_P3)
{
    cr_redirect_stdout();
    my_isneg(54000);
    cr_assert_stdout_eq_str("P");
}

Test (my_isneg, should_print_N)
{
    cr_redirect_stdout();
    my_isneg(-20);
    cr_assert_stdout_eq_str("N");
}

Test (my_isneg, should_print_N2)
{
    cr_redirect_stdout();
    my_isneg(-50000);
    cr_assert_stdout_eq_str("N");
}
