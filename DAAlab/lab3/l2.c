#include<stdio.h>
#include<time.h>

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    clock_t t;
    t = clock();
    printf("The gcd of 31415 and 14142 is %d\n",gcd(31415,14142));
    t = clock() - t;
    printf("The time taken is %lf",(double)t/CLOCKS_PER_SEC);

    printf("\n\n");

    t = clock();
    printf("The gcd of 56 and 32566 is %d\n",gcd(56,32566));
    t = clock() - t;
    printf("The time taken is %lf",(double)t/CLOCKS_PER_SEC);

    printf("\n\n");

    t = clock();
    printf("The gcd of 12 and 15 is %d\n",gcd(12,15));
    t = clock() - t;
    printf("The time taken is %lf",(double)t/CLOCKS_PER_SEC);

    printf("\n\n");

    t = clock();
    printf("The gcd of 12 and 12 is %d\n",gcd(12,12));
    t = clock() - t;
    printf("The time taken is %lf",(double)t/CLOCKS_PER_SEC);

    printf("\n\n");

}