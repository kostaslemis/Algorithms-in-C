#include <stdio.h>
#include <stdlib.h>

typedef int Item;

#define less(A, B) (A < B)


void exch(Item a[], int i, int min) {
    Item temp = a[i];
    a[i] = min;
    min = temp;
}

void selection_sort(Item a[], int l, int r) {
    for (int i = 0; i < r; i++) {
        int min = i;
        for (int j = i+1; j <= r; j++)
            if (less(a[j], a[min])) min = j;
        exch(a, i, min);  
    }
}