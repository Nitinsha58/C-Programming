#include<stdio.h>
#include<string.h>

struct Student {
    char firstName[50];
    int roll;
    float marks;   
} s[5];

int main(){
    printf("Enter information of students:\n");

    // storing information
    for (int i= 0; i < 5; ++i){
        s[i].roll = i + 1;
        printf("For roll number: %d\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter makrs: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nDisplaying Information\n\n");
    
    // displaying information
    for (int i = 0; i < 5; ++i){
        printf("\nRoll number: %d\n", s[i].roll);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
}