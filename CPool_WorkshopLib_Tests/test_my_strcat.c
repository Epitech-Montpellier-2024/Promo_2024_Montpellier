#include <criterion/criterion.h>
#include <criterion/redirect.h>

char *my_strcat(char *dest, char const *src);

Test(my_strcat_, should_concats_2_strings) {

    char message[] = "bonjour";
    char message2[] = "oui";

    cr_assert_str_eq(my_strcat(message, message2), "bonjouroui");
}
