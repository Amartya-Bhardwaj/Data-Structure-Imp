#include<stdio.h>
#include<string.h>

struct Subject
{
    char name[5];
    int *id;
    int duration;
    char type[10];
};

struct Subject s;

void data(){
    strcpy(s.name, "DAA");
    s.id = 124;
    s.duration = 3;
    strcpy(s.type,"ALgorithm");
}

void display(){
    printf("Name: %s\n",s.name);
    printf("Id: %d\n",s.id);
    printf("Duration: %d hour\n",s.duration);
    printf("Type: %s",s.type);
}

int main(){
    data();
    display();
    return 0;
}