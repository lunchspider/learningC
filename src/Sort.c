#include "Sort.h"


void print_arr(int *arr, size_t size)
{
    printf("Array is\n %d ", arr[0]);
    for(size_t i = 1; i < size; i++)
        printf(",%d ", arr[i]);

    printf("\n");
}

void scan_arr(int *arr, size_t size)
{
    printf("Enter the elements of the array :\n");
    for(size_t i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void insert_sort(int *arr, size_t size)
{
    for(size_t i = 1; i < size; ++i){
        for(size_t j = i; j > 0; --j){
            if (arr[j] < arr[j-1])
                swap( &arr[j], &arr[j-1]);
            else 
                break;
        }
    }
}

void insert_sort_reverse(int *arr, size_t size) 
{
    for(size_t i = size - 1; i > 0; --i){
        for(size_t j = i - 1; j < size; ++j){
            if( arr[j] <  arr[j + 1])
                swap( &arr[j], &arr[j + 1]);
            else 
                break;
        }
    }
}

