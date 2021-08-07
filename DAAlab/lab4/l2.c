#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
                k = j;
        }
        swap(&A[i], &A[k]);
    }
}

int main()
{
    int n;
    int k = n;
    time_t strt, end;
    double t;
    scanf("%d", &n);
    int Avg[n];
    int Best[n];
    int worst[n];
    for (int i = 0; i < n; i++)
    {
        Best[i] = i+1;
        Avg[i] = rand();
        worst[i] = k;
        k--;
    }
    strt = clock();
    selectionSort(Avg, n);
    end = clock();
    t = end - strt;
    printf("Time Complexity(Insertion sort) Avg : %f\n", (t / CLOCKS_PER_SEC));
    strt = clock();
    selectionSort(Best, n);
    end = clock();
    t = end - strt;
    printf("Time Complexity(Insertion sort) Best : %f\n", (t / CLOCKS_PER_SEC));
    strt = clock();
    selectionSort(worst, n);
    end = clock();
    t = end - strt;
    printf("Time Complexity(Insertion sort) worst : %f\n", (t / CLOCKS_PER_SEC));
    return 0;
}