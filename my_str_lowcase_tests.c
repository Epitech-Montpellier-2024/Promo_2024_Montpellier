#include "my.h"

#include <criterion/criterion.h>

Test(my_str_lowcase, should_return_empty_string)
{
    char message[] = "";
    my_str_lowcase(message);
    cr_assert_str_empty(message);
}

Test(my_str_lowcase, should_return_Z_in_low_case)
{
    char message[] = "Z";
    my_str_lowcase(message);
    cr_assert_str_eq(message, "z");
}

Test(my_str_lowcase, should_return_toto)
{
    char message[] = "TOTO";
    my_str_lowcase(message);
    cr_assert_str_eq(message, "toto");
}

Test(my_str_lowcase, should_return_string_in_lower_case)
{
    char message[] = "SALUT les co(NS) pains ?§?!";
    my_str_lowcase(message);
    cr_assert_str_eq(message, "salut les co(ns) pains ?§?!");
}