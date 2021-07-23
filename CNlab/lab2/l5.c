#include <stdio.h>

struct student 
{
    char name[50];
    int age;
    char subjectID[20];
}std;

int main()
{
    //using structure variable
    printf("Enter the name of the student: ");
    scanf("%s",&std.name);
    printf("Enter the age of the student: ");
    scanf("%d",&std.age);
    printf("Enter the  subjectID: ");
    scanf("%s",&std.subjectID);
    printf("\nUsing structure variable:-\n");
    printf("Name: %s \n",std.name);
    printf("Age: %d \n",std.age);
    printf("Subject ID: %s \n",std.subjectID);
    
    //using pointer variable
    struct student *ptr;
    ptr=&std;
    printf("\nUsing pointer variable:- \n");
    printf("Name: %s \n",(*ptr).name);
    printf("Age: %d \n",(*ptr).age);
    printf("Subject ID: %s \n",(*ptr).subjectID);
    return 0;
}