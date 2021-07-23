#include<stdio.h>
#include<stdlib.h>

int non_zero(int A[5][5]){
    int count = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(A[i][j] != 0){
                count++;
            }  
        }
    }
    return count;
}

int sumUpper(int A[5][5]){
    int sum = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j > i){
               sum += A[i][j];
            }  
        }
    }
    return sum;
}

void Display(int A[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j < i){
               printf("%d ",A[i][j]);
            }  
        }
    }
    printf("\n");
}
int productD(int A[5][5]){
    int product = 1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j == i){
               product = product*A[i][j];
            }  
        }
    }
    return product;
}

int main(){
    int A[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("No of non zero %d\n",non_zero(A));
    printf("Sum is %d\n",sumUpper(A));
    Display(A);
    printf("Product of diagonal %d\n",productD(A));
    return 0;
}