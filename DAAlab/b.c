#include<stdio.h>

int main(){
    int a,i =0;
    int temp;
    char c[10];
    scanf("%d",&a);
    while(a!=0){
       temp = a%10;
       a = a/10;
       c[i] = sizeof(temp);
       i++;
    }
    for(int i=0;i<3;i++){
        printf("%c",c[i]);
    }
    return 0;
}