#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, should_return_empty_str)
{
    char str[] = "";
    
    my_revstr(str);
    cr_assert_str_empty(str);
}

Test(my_revstr, should_return_hello_revstr)
{
    char str[] = "Hello";
    
    my_revstr(str);
    cr_assert("olleH");
}

Test(my_revstr, should_return_helloworld_revstr)
{
    char str[] = "Hello World !";

    my_revstr(str);
    cr_assert("! dlroW olleH");
}

Test(my_revstr, should_return_string_HELLO)
{
    char message[] = "HELLO";
    my_revstr(message);
    cr_assert_str_eq(message, "OLLEH");
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
