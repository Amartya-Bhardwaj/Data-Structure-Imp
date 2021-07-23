#include<stdio.h>
#include<string.h>

struct Student
{
    char name[20];
    int roll;
    char state[10];
    int age;
};

int main(){
    struct Student s1;
    s1.roll = 1905812;
    s1.age = 20;
    strcpy(s1.name,"Amartya");
    strcpy(s1.state,"Bihar");
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
    printf("STate: %s\n",s1.state);
    printf("Roll: %d\n",s1.roll);
    return 0;
}