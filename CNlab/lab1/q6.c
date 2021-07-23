#include<stdio.h>
#include<stdlib.h>


void add(int n){
    n = n + 300;
    printf("%d\n", n);
}

void addR(int *n){
    *n = *n + 500;
    printf("%d\n", *n);
}

void swap(int *x, int *y){
    int var = *x;
    *x = *y;
    *y = var;
}


int main(){
    int a;
    int num = 500;
    int n = 5;
    int *A;
    int size = 5, sum = 0;
    int c = 500, b = 600;
    do
    {
        printf("MENU: 1} Q1 2} Q2 3} Q3 4} Q4 5} Q5 6} EXIT\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
                add(num);
                printf("\nvalue not changes: %d\n",num);break;
        case 2: 
                addR(&num);break;
        case 3: 
                swap(&c,&b);
                printf("a: %d , b: %d\n",a,b);break;
        case 4: 
                A = (int* )malloc(sizeof(int)*size);
                for(int i=0;i<size;i++){
                    scanf("%d",&A[i]);
                }
                for(int i=0;i<size;i++){
                    sum = sum + A[i];
                }
                printf("sum of Array: %d\n",sum);break;
        case 5: 
                A = (int* )malloc(sizeof(int)*n);
                for(int i=0;i<n;i++){
                    scanf("%d",&A[i]);
                }
                for(int i=0;i<n;i++){
                    printf("%d ",A[i]);
                }
                printf("\n");
                // Reallocation.
                A = (int* )realloc(A,6);
                for(int i=0;i<6;i++){
                    scanf("%d",&A[i]);
                }
                printf("\nNew Array: ");
                for(int i=0;i<6;i++){
                    printf("%d ",A[i]);
                }printf("\n");break;
        default:
            break;
        }
    } while (a<=5);
    
    return 0;
}