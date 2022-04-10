#include<stdio.h>
#include<string.h>

struct Student{
    char name[50];
    int roll;
    float marks;
} s;

int main(){
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter the marks: ");
    scanf("%f", &s.marks);

    printf("\nDisplaying Information:\n");
    printf("Name: %s", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}