#include<stdio.h>

typedef unsigned char BYTE;

int main(){
    unsigned int value = 0x11223344;
    BYTE a,b,c,d;
    a = (value&0xFF);
    b = ((value>>8)&0xFF);
    c = ((value>>16)&0xFF);
    d = ((value>>32)&0xFF);
    printf("a = %0.2X\n",a);
    printf("b = %0.2X\n",b);
    printf("c = %0.2X\n",c);
    printf("d = %0.2X\n",d);
    return 0;
}