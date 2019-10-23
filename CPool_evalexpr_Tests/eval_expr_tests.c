#include <criterion/criterion.h>

int eval_expr(char *str);

Test(eval_expr, should_return_5)
{
    char str[] = "3+42*(1-2/(3+4)-1%21)+2";
    int nb = eval_expr(str);
    cr_assert_eq(nb, 5);
}

Test(eval_expr, should_return_0)
{
    char str[] = "0";
    int nb = eval_expr(str);
    cr_assert_eq(nb, 0);
}

Test(eval_expr, should_return_1)
{
    char str[] = "1";
    int nb = eval_expr(str);
    cr_assert_eq(nb, 1);
}

Test(eval_expr, should_return_neg1)
{
    char str[] = "-1";
    int nb = eval_expr(str);
    cr_assert_eq(nb, -1);
}

Test(eval_expr, should_return_42)
{
    char str[] = "(((42)))";
    int nb = eval_expr(str);
    cr_assert_eq(nb, 42);
}