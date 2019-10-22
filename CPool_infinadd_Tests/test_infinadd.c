/*
** EPITECH PROJECT, 2019
** test_infinadd
** File description:
** Tests for infinadd
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void infinadd(char *, char *);

void    redirect_all_stdout()
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(infinadd, should_return_26, .init = redirect_all_stdout)
{
    char nb_1[] = "12";
    char nb_2[] = "14";
    infinadd(nb_1, nb_2);
    cr_assert_stdout_eq_str("26\n");
}

Test(infinadd, should_return_12415039892337, .init = redirect_all_stdout)
{
    char nb_1[] = "12384000049328";
    char nb_2[] = "31039843009";
    infinadd(nb_1, nb_2);
    cr_assert_stdout_eq_str("12415039892337\n");
}

Test(infinadd, should_return_0, .init = redirect_all_stdout)
{
    char nb_1[] = "-12";
    char nb_2[] = "12";
    infinadd(nb_1, nb_2);
    cr_assert_stdout_eq_str("0\n");
}

Test(infinadd, should_return_5704443635780, .init = redirect_all_stdout)
{
    char nb_1[] = "5677654567890";
    char nb_2[] = "26789067890";
    infinadd(nb_1, nb_2);
    cr_assert_stdout_eq_str("5704443635780\n");
}

Test(infinadd, should_return_567765430000294840, .init = redirect_all_stdout)
{
    char nb_1[] = "567765456789362730";
    char nb_2[] = "-26789067890";
    infinadd(nb_1, nb_2);
    cr_assert_stdout_eq_str("567765430000294840\n");
}
