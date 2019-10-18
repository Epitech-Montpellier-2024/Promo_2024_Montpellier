#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_putchar(char c);
int my_showstr(char const *str);

Test (my_showstr, should_print_AA)
{
    cr_redirect_stdout();
    my_showstr("AA");
    cr_assert_stdout_eq_str("AA");
}

Test (my_showstr, should_print_AA_with_some_hexa_value)
{
    cr_redirect_stdout();
    my_showstr("AA \n AA");
    cr_assert_stdout_eq_str("AA 0a AA");
}

Test (my_showstr, should_print_a_lot_of_hexa_values)
{
    cr_redirect_stdout();
    my_showstr("I like ponies \a i like horses too \n");
    cr_assert_stdout_eq_str("I like ponies 07 i like horses too 0a");
}