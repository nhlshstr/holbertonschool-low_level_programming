#ifndef HOLBY_SCHOOL
#define HOLBY_SCHOOL
#include <stddef.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int binary_search_4exp(int *array, int value, int low, int high);
int __min(int a, int b);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int rec_bs_helper(int *arr, int low, int high, int value, int result);
void array_printer(int *pArray, int low, int high);
int jump_search(int *array, size_t size, int value);
#endif
