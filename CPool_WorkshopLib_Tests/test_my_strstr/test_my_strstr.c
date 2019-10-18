#include <criterion/criterion.h>

char *my_strstr(char const *first, char const *second);

Test(my_strstr, should_find_empty_string_in_empty_string)
{
    char first[] = "";
    char second[] = "";
    char *result = my_strstr(first, second);
    cr_assert_eq(result, first);    
}

Test(my_strstr, should_find_empty_string_in_non_empty_string)
{
    char first[] = "hello";
    char second[] = "";
    char *result = my_strstr(first, second);
    cr_assert_eq(result, first);    
}

Test(my_strstr, should_not_find_non_empty_string_in_empty_string)
{
    char first[] = "";
    char second[] = "hello";
    char *result = my_strstr(first, second);
    cr_assert_null(result);
}

Test(my_strstr, should_find_BC_in_ABC)
{
    char first[] = "ABC";
    char second[] = "BC";
    char *result = my_strstr(first, second);
    cr_assert_eq(result, first + 1);
}
