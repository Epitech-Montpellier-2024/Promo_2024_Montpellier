#include <criterion/criterion.h>

char **my_str_to_word_array(char *);

Test(my_str_to_word_array, should_return_NULL) {
    char message[] = "";
    char **result = my_str_to_word_array(message);
    cr_assert_not_null(result);
    cr_assert_null(result[0]);
}

Test(my_str_to_word_array, should_return_AAA_NULL) {
    char message[] = "AAA";
    char **result = my_str_to_word_array(message);
    cr_assert_not_null(result);
    cr_assert_str_eq(result[0], "AAA");
    cr_assert_null(result[1]);
}
