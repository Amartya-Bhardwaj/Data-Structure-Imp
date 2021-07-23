#include<stdio.h>
#include<math.h>
#include<time.h>

int is_prime_1(int n)
{
    if(n<=1)
        return 0;
    
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int is_prime_2(int n)
{
    if(n<=1)
        return 0;
    
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int is_prime_3(int n)
{
    if(n<=1)
        return 0;
    
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}


int main()
{
    clock_t t;
    t = clock();
    int n = 24;
    int res = is_prime_1(n);
    if(res)
        printf("\nThe number %d is prime",n);
    else
        printf("\nThe number %d is not prime",n);
    t = clock() - t;
    printf("\nThe time taken is %lf",(double)t/CLOCKS_PER_SEC);


    t = clock();
    res = is_prime_2(n);
    if(res)
        printf("\nThe number %d is prime",n);
    else
        printf("\nThe number %d is not prime",n);
    t = clock() - t;
    printf("\nThe time taken is %lf",(double)t/CLOCKS_PER_SEC);

    t = clock();
    res = is_prime_3(n);
    if(res)
        printf("\nThe number %d is prime",n);
    else
        printf("\nThe number %d is not prime",n);
    t = clock() - t;
    printf("\nThe time taken is %lf",(double)t/CLOCKS_PER_SEC);



}