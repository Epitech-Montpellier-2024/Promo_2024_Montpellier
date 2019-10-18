/*
** EPITECH PROJECT, 2019
** test_my_sort_int_array
** File description:
** test the my_sort_int_array function
*/

#include <criterion/criterion.h>

int *my_sort_int_array(int *, int);

Test (my_sort_int_array, should_return_0)
{
    int arr[1] = {0};
    int arr2[1] = {0};
    
    cr_assert_eq(my_sort_int_array(arr, 1), *arr2);
}

Test (my_sort_int_array, should_return_1_2)
{
    int arr[2] = {2, 1};
    int arr2[2] = {1, 2};
    
    cr_assert_eq(my_sort_int_array(arr, 2), *arr2);
}

Test (my_sort_int_array, should_return_0_1_2_3_4_5_6_7_8_9)
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int arr2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    cr_assert_eq(my_sort_int_array(arr, 10), *arr2);
    
}

Test (my_sort_int_array, should_return_n51_n48_n7_55_251_2222_2223)
{
    int arr[7] = {2222, 55, -48, 2223, -51, 251, -7};
    int arr2[7] = {-51, -48, -7, 55, 251, 2222, 2223};
    
    cr_assert_eq(my_sort_int_array(arr, 7), *arr2);
}
