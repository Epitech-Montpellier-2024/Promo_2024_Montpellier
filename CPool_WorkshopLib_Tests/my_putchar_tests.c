#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_putchar(char c);

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