#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, return_empty_str)
{
    char str[] = "";
    my_revstr(str);

    cr_assert("");
}

Test(my_revstr, return_hello_revstr)
{
    char str[] = "Hello";
    
    my_revstr(str);
    cr_assert("olleH");
}

Test(my_revstr, return_helloworld_revstr)
{
    char str[] = "Hello World !";

    my_revstr(str);
    cr_assert("! dlroW olleH");
}