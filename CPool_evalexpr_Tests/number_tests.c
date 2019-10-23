#include <criterion/criterion.h>
#include <stdlib.h>

int number(char *str);

Test(my_strtol_test, should_pass_1)
{
    char *endptr;

    int nb1 = number("123aaaa");
    int nb = strtol("123aaaa", &endptr, 10);
    cr_assert_eq(nb, nb1);
}

Test(my_strtol_test, should_pass_2)
{
    char *endptr;

    int nb1 = number("123");
    int nb = strtol("123", &endptr, 10);
    cr_assert_eq(nb, nb1);
}

Test(my_strtol_test, should_pass_3)
{
    char *endptr;

    int nb1 = number("");
    int nb = strtol("", &endptr, 10);
    cr_assert_eq(nb, nb1);
}
