#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int A[], int n)
{
    int result = A[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(A[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

int findlcm(int A[], int n)
{
    int ans = A[0];
    for (int i = 1; i < n; i++)
        ans = (((A[i] * ans)) /(gcd(A[i], ans)));

    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    int A[n]; 
    for(int i =0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("GCD: %d\n",findGCD(A,n));
    printf("LCM: %d",findlcm(A,n));
    return 0;
}