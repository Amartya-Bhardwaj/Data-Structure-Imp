#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define int long long
//function to display the array.
void show(int *A, int n_727)
{
    for (int i = 0; i < n_727; i++)
        printf("%d ", A[i]);
}

void Merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[100];

    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];

    for (i = l; i <= h; i++)
        A[i] = B[i];
}
void MergeSort(int A[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        MergeSort(A, l, mid);
        MergeSort(A, mid + 1, h);
        Merge(A, l, mid, h);
    }
}

int main()
{
    
    int n_727, ch_727, again_727, i;
    
    time_t strt, end;
    printf("Enter the size of array: ");
    scanf("%d", &n_727);
    int A[n_727];

    for (int i = 0; i < n_727; i++)
        A[i] = rand();
    // show(A, n_727);
    strt = clock();
    MergeSort(A,0,n_727 - 1);
    end = clock();
    double t = (end - strt);
    printf("time = %f\n",(t/CLOCKS_PER_SEC));
    //show(A, n_727);
    return 0;
}