#include <criterion/criterion.h>

char *my_strupcase(char *str);

Test(my_strupcase, should_return_empty_string)
{
    char string[] = "";
    my_strupcase(string);
    cr_assert_str_empty(string);
}

Test(my_strupcase, should_return_A)
{
    char string[] = "a";
    my_strupcase(string);
    cr_assert_str_eq(string, "A");
}

Test(my_strupcase, should_return_ABCDE)
{
    char string[] = "abcde";
    my_strupcase(string);
    cr_assert_str_eq(string, "ABCDE");
}

Test(my_strupcase, should_return_ABCtiretCDE)
{
    char string[] = "ab-cde";
    my_strupcase(string);
    cr_assert_str_eq(string, "AB-CDE");
}
