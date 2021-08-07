#include <stdio.h>
#include<time.h>
#include<limits.h>


int algo(int arr[], int n)
{
    int max_sum = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        if (max_sum < curr_sum)
            max_sum = curr_sum;
        if (curr_sum < 0)
            curr_sum = 0;
    }

    return max_sum;
}

int main()
{
    time_t strt, end;
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    strt = clock();
    int ans = algo(arr, n);
    end = clock();
    double t = end - strt;
    printf("The maximum contigous sum is %d", ans);
    printf("\nTime : %f",(t/CLOCKS_PER_SEC));
}