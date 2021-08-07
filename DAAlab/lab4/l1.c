#include <stdio.h>
#include <time.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Bubble_sort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
                swap(&A[j], &A[j + 1]);
        }
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
    Bubble_sort(Avg, n);
    end = clock();
    t = end - strt;
    printf("Time Complexity Avg: %f\n", (t / CLOCKS_PER_SEC));
    strt = clock();
    Bubble_sort(Best, n);
    end = clock();
    t = end - strt;
    printf("Time Complexity Best: %f\n", (t / CLOCKS_PER_SEC));
    strt = clock();
    Bubble_sort(worst, n);
    end = clock();w
    t = end - strt;
    printf("Time Complexity worst: %f\n", (t / CLOCKS_PER_SEC));
    return 0;
}