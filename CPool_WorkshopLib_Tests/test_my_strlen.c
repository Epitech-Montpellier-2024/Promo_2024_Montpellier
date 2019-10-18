#include<criterion/criterion.h>

int my_strlen(char const *str);

Test(my_strlen, test_on_empty_string)
{
    int result = my_strlen("");
    cr_assert_eq(result, 0);
}

Test(my_strlen, test_on_normal_string)
{
    int result = my_strlen("Hello");
    cr_assert_eq(result, 5);
}

Test(my_strlen, test_on_full_sentence)
{
    int result = my_strlen("Hello World!");
    cr_assert_eq(result, 12);
}

Test(my_strlen, test_on_potentially_broken_strings)
{
    int result = my_strlen("Hello+-*/\nworld");
    cr_assert_eq(result, 15);
}
