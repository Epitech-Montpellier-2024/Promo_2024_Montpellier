#include <criterion/criterion.h>

int my_getnbr(char const *str);

Test(my_getnbr, should_return_42)
{
    char str[] = "42jemepresentejemappellehenry42gentillepersonne";
    int nb = 0;

    nb = my_getnbr("42jemepresentejemappellehenry42gentillepersonne");
    cr_assert_eq(nb, 42);
}

Test(my_getnbr, should_return_neg42)
{
    char str[] = "-42";
    int nb = 0;

    nb = my_getnbr("-42");
    cr_assert_eq(nb, -42);
}

Test(my_getnbr, should_return_0)
{
    char str[] = "76543234567854";
    int nb = 0;

    nb = my_getnbr("76543234567854");
    cr_assert_eq(nb, 0);
}