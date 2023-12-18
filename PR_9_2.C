#include <stdio.h>

struct student
{
    int age;
    int weight;
};

int main()
{
    struct student s1, *p;
    p = &s1;

    printf("enter age:");
    scanf("%d", &p->age);

    printf("enter weight:");
    scanf("%d", &p->weight);

    printf("\nage is %d", p->age);
    printf("\nweight is %d", p->weight);

    return 0; 
}