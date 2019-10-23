#include <criterion/criterion.h>

int summands(char **str);

Test(summands_test, should_pass_1)
{
    char *test = "1+2";

    cr_assert_eq(summands(&test), 3);
}

Test(summands_test, should_pass_2)
{
    char *test = "1123123+231312";

    cr_assert_eq(summands(&test), 1354435);
}

Test(summands_test, should_pass_3)
{
    char *test = "";

    cr_assert_eq(summands(&test), NULL);
}
