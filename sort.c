#include <stdio.h>
#include <stdlib.h>

typedef int Item;

#define less(A, B) (A < B)
#define exch(A, B) { Item temp = A; A = B; B = temp; }
#define compexch(A, B) if (less(B, A)) exch(A, B)


void sort(Item a[], int l, int r) {
    for (int i = l+1; i <= r; i++)
        for (int j = i; j > l; j--)
            compexch(a[j-1], a[j]);
}

int main(int argc, char *argv[]) {
    if (argc != 2) return EXIT_FAILURE;

    int N = atoi(argv[1]);
    int *a = malloc(N*sizeof(int));

    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
            
    sort(a, 0, N-1);
    for (int i = 0; i < N; i++) printf("%d ", a[i]);
    printf("\n");

    return EXIT_SUCCESS;
}