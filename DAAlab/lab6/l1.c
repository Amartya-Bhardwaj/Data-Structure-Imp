#include <stdio.h>
#include<time.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;

    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);

        if (i < j)
            swap(&A[i], &A[j]);
    } while (i < j);

    swap(&A[l], &A[j]);
    return j;
}

void Quicksort(int A[], int l ,int h){
    int q;
    if(l<h){
        q = partition(A, l, h);
        Quicksort(A,l,q);
        Quicksort(A,q+1,h);
    }
}

int main()
{
    time_t strt,end;
    double t;
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = rand();
    }
    printf("Array: ");
     for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    strt = clock();
    Quicksort(A,0,n);
    end = clock();
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    t = end - strt;
    printf("Time : %f",(t/CLOCKS_PER_SEC));
    return 0;
}