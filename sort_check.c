#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int Item;

#define less(A, B) (A < B)


bool sort_check(Item a[], int l, int r) {
    for (int i = l+1; i <r; i++)
        if (!less(a[i-1], a[i])) return false;

    return true;
}