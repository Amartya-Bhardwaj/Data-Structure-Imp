#include <stdio.h>
#include<time.h>

int algo(int arr[], int n)
{
    int max_diff = arr[1] - arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        int curr_diff = arr[i] - min;

        if (max_diff < curr_diff)
            max_diff = curr_diff;

        if (arr[i] < min)
            min = arr[i];
    }

    return max_diff;
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
    printf("The maximum differnece  is %d", ans);
    printf("\nTime : %f",(t/CLOCKS_PER_SEC));
    return 0;
}