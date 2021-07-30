#include<stdio.h>
#include<string.h>
int main()
{
 int i=0,count=0;
 char databits[80];


 printf("Enter Data Bits: ");
 scanf("%s",databits);
 //0011111100011011111001
 printf("Data Bits Before Bit Stuffing:%s",databits);
 //0011111100011011111001
 printf("\nData Bits After Bit stuffing :");
  
 for(i=0; i<strlen(databits); i++)
 {
    if(databits[i]=='1')
        count++;
    else
        count=0;
    printf("%c",databits[i]);
//00111110
    if(count==5)
    {
        printf("0");
        count=0;
    }
 }
 return 0;
}