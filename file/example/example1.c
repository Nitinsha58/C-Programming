#include<stdio.h>
#include<stdlib.h>


// C program to read name and marks of n number of students and store them in a file.

int main(){
    char name[50];
    int marks, i, num;

    printf("Enter number of students: ");
    scanf("%d", &num);

    FILE *fptr;
    fptr = (fopen("student.txt", "w"));
    if (fptr == NULL){
        printf("Error!");
        exit(1);
    }

    for (i = 0; i < num; ++i){
        printf("For student %d\nEnter name: ", i + 1);
        scanf("%s", name);

        printf("Enter amrks: ");
        scanf("%d", &marks);

        fprintf(fptr, "\nName: %s \nMarks=%d \n", name, marks);
    }

    fclose(fptr);

    return 0;
}