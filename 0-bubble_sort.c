#include "sort.h"
/**
 *bubble_sort - Function that sorts an array of ints
 *using bubble sort algorithm
 *
 *@array: array of ints
 *@size: size of array
 *
 */
void bubble_sort(int *array, size_t size)
{
        int temp, i, j;

        if (!array || !size)
                return;

        for (i = 0; i < size - 1; i++)
        {
                for (j = 0; j < size - i - 1; j++)
                {
                        if (array[j] > array[j + 1])
                        {
                                temp = array[j];
                                array[j] = array[j + 1];
                                array[j + 1] = temp;
                                print_array(array, size);
                        }

                }
        }
}


