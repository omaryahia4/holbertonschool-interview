#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>

void display(int *array, int *right, int li, int *left, int ri, size_t size);
void print_array(const int *array, size_t size);
void merge_sort(int *array, size_t size);

#endif /* _SORT_H_ */
