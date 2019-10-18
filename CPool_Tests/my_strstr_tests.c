#include <criterion/criterion.h>

char *my_strstr(char const *haystack, char const *needle);

Test(my_strstr, should_find_empty_string_in_empty_string)
{
    char haystack[] = "";
    char needle[] = "";
    char *result = my_strstr(haystack, needle);
    cr_assert_eq(result, haystack);    
}

Test(my_strstr, should_find_empty_string_in_non_empty_string)
{
    char haystack[] = "hello";
    char needle[] = "";
    char *result = my_strstr(haystack, needle);
    cr_assert_eq(result, haystack);    
}

Test(my_strstr, should_not_find_non_empty_string_in_empty_string)
{
    char haystack[] = "";
    char needle[] = "hello";
    char *result = my_strstr(haystack, needle);
    cr_assert_null(result);
}

Test(my_strstr, should_find_BC_in_ABC)
{
    char haystack[] = "ABC";
    char needle[] = "BC";
    char *result = my_strstr(haystack, needle);
    cr_assert_eq(result, haystack + 1);
}

Test(my_strstr, should_work_like_strstr)
{
    char haystack[] = "ABC";
    char needle[] = "BC";
    char *my_result = my_strstr(haystack, needle);
    char *result = strstr(haystack, needle);
    cr_assert_eq(result, my_result);
}
