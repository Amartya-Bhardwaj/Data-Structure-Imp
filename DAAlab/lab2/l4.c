#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n = 100000;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    int best = arr[(n - 1) / 2];
    int worst = arr[1];
    int avg = arr[n / 16];
    time_t strt, end;
    int lo = 0, hi = n - 1;
    strt = clock();
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid] == best)
        {
            end = clock();
            double t = end - strt;
            printf("Time taken for best case: %f\n", (t / CLOCKS_PER_SEC));
            break;
        }
        if (arr[mid] > best)
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    lo = 0, hi = n - 1;
    strt = clock();
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid] == avg)
        {
            end = clock();
            double t = end - strt;
            printf("Time taken for avg case: %f\n", (t / CLOCKS_PER_SEC));
            break;
        }
        if (arr[mid] > avg)
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    lo = 0, hi = n - 1;
    strt = clock();
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid] == worst)
        {
            end = clock();
            double t = end - strt;
            printf("Time taken for worst case: %f\n", (t / CLOCKS_PER_SEC));
            break;
        }
        if (arr[mid] > worst)
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return 0;
}