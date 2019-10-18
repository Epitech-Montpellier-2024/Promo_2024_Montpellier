#include <criterion/criterion.h>

int my_getnbr(char const *str);

Test(my_getnbr, should_return_42)
{
    char str[] = "jemepresentejemappellehenry42gentillepersonne";
    int nb = 0;

    nb = my_getnbr(str);
    cr_assert_eq(nb, 42);
}

Test(my_getnbr, should_return_neg42)
{
    char str[] = "jemepresentejemappelle---henry-42gentillepersonne";
    int nb = 0;

    nb = my_getnbr(str);
    cr_assert_eq(nb, -42);
}

Test(my_getnbr, should_return_0)
{
    char str[] = "jemepresenteppellehenry42123456789876543234567854";
    int nb = 0;

    nb = my_getnbr(str);
    cr_assert_eq(nb, 0);
}
