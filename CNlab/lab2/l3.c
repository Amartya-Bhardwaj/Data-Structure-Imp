#include<stdio.h>
#include<string.h>

struct Member{
    char name[20];
    int id;
    int age;
    char gender[1];
    char city[10];
};

void display(struct Member *m){
    printf("Name: %s\n",m->name);
    printf("id: %d\n",m->id);
    printf("age: %d\n",m->age);
    printf("Gender: %s\n",m->gender);
    printf("City: %s\n",m->city);
}

int main(){
    struct Member mem;
    strcpy(mem.name, "Amartya");
    mem.id = 1234;
    mem.age = 21;
    strcpy(mem.gender, "M");
    strcpy(mem.city, "Patna");
    display(&mem);
    return 0;
}