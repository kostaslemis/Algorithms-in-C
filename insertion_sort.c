#include <stdio.h>
#include <stdlib.h>

typedef int Item;

#define less(A, B) (A < B)
#define exch(A, B) { Item temp = A; A = B; B = temp; }
#define compexch(A, B) if (less(B, A)) exch(A, B)


void insertion(Item a[], int l, int r) {
    for (int i = l+1; i <= r; i++) compexch(a[l], a[i]);
    for (int i = l+2; i <= r; i++) {
        int j = i; Item v = a[i];
        while (less(v, a[j-1]))
            { a[j] = a[j-1]; j--; }
        a[j] = v;
    }
}

