#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char *name;
    int *age;
};

int main(){
    struct Student s1;
    s1.name = (char* )malloc(sizeof(char)*5);
    s1.name[0] = 'A';
    s1.name[1] = 'c';
    s1.name[2] = 'm';
    s1.name[3] = 'a';
    s1.name[4] = 'm';
   
    s1.age = (int* )malloc(sizeof(int));
    s1.age[0] = 50;
    printf("Name : %s\n Age: %d",s1.name,*s1.age);
    return 0;
}
