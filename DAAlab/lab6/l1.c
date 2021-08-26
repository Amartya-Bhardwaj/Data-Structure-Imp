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
    int Best[n];
    int Avg[n];
    int worst[n];
    for (int i = 0; i < n; i++)
    {
        Best[i] = rand();
        Avg[i] = 1;
        worst[i] = i+1;
    }
    strt = clock();
    Quicksort(Best,0,n);
    end = clock();
    t = end - strt;
    printf("Time Best : %f\n",(t/CLOCKS_PER_SEC));
    strt = clock();
    Quicksort(Avg,0,n);
    end = clock();
    t = end - strt;
    printf("Time Avg : %f\n",(t/CLOCKS_PER_SEC));
    strt = clock();
    Quicksort(worst,0,n);
    end = clock();
    t = end - strt;
    printf("Time Worst : %f\n",(t/CLOCKS_PER_SEC));
    return 0;
}