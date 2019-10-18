#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);

Test (my_strncpy, test_on_empty_string)
{ 
    char *dest = "";
    char *src = "";
    int n = 0;
    char *result = my_strncpy(dest ,src , n);
    cr_assert_eq(result, src);
}

Test (my_strncpy, test_on_normal_string)
{ 
    char dest[6];
    char src[] = "Hello";
    int n = 5;
    char *result = my_strncpy(dest ,src , n);
    cr_assert_eq(result, src);
}

Test (my_strncpy, test_n_is_null)
{ 
    char dest[6];
    char src[] = "Hello";
    int n = 0;
    char *result = my_strncpy(dest ,src , n);
    cr_assert_eq(result, src);
}

Test (my_strncpy, test_string_is_number)
{ 
    char dest[6];
    char src[] = "12345";
    int n = 3;
    char *result = my_strncpy(dest ,src , n);
    cr_assert_eq(result, src);
}