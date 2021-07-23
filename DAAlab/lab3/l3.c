#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Random(int A[]){
    for(int i=0;i<5;i++){
        A[i] = rand();
    }
}

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void InsertionSort(int A[]){
    int i,j,x;
    
    for(i=1;i<5;i++)
    {
        j=i-1;
        x=A[i];
    while(j>-1 && A[j]>x)
    {
        A[j+1]=A[j];
        j--;
    }
        A[j+1]=x;
    }
}

void Bubble(int A[],int n)
{
    int i,j,flag=0;
    
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
    {
    if(A[j] < A[j+1])
    {
        swap(&A[j],&A[j+1]);
        flag=1;
    }
    }
    if(flag==0)
        break;
    }
}

int main(){
    time_t strt,end;
    int a;
    int A[5];
    double t;
    do
    {
        printf("MENU: 1} Q1 2} Q2 3} Q3 4} Q4 5} Q5 6} Q6 7} Q7 8} EXIT\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1: 
               Random(A);
               break;
        case 2: for(int i=0;i<5;i++){
                   printf("%d ",A[i]);
                }printf("\n");
               break;
                
        case 3: 
                InsertionSort(A);
                for(int i=0;i<5;i++){
                   printf("%d ",A[i]);
                }printf("\n");
                break;
        case 4: Bubble(A,5);
                for(int i=0;i<5;i++){
                   printf("%d ",A[i]);
                }printf("\n");
                break;
        case 5: strt =clock();
                InsertionSort(A);
                end = clock();
                 t = end - strt;
                printf("Time Complexity : %f\n",(t/CLOCKS_PER_SEC));break;
        
        case 6: strt = clock();
                Bubble(A,5);
                end = clock();
                 t = end - strt;
                printf("Time Complexity : %f\n",(t/CLOCKS_PER_SEC));break;
        

                
        default:
            break;
        }
    } while (a<=7);
    return 0;
}