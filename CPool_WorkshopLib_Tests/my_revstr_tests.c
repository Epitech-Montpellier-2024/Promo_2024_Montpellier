#include "my.h"

#include <criterion/criterion.h>

Test(my_revstr, should_return_empty_string)
{
    char message[] = "";
    my_revstr(message);
    cr_assert_str_empty(message);
}

Test(my_revstr, should_return_string_Z)
{
    char message[] = "Z";
    my_revstr(message);
    cr_assert_str_eq(message, "Z");
}

Test(my_revstr, should_return_string_TOTO)
{
    char message[] = "TOTO";
    my_revstr(message);
    cr_assert_str_eq(message, "OTOT");
}

Test(my_revstr, should_return_string_HELLO)
{
    char message[] = "HELLO";
    my_revstr(message);
    cr_assert_str_eq(message, "OLLEH");
}
