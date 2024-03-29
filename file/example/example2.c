#include<stdio.h>
#include<stdlib.h>

// c program to read name and marks of students from and store them in a file
//. If the file previously exits, add the information to the file.

int main(){

    char name[50];
    int marks, num;


    printf("Enter number of students: ");
    scanf("%d", &num);

    FILE *fptr;
    fptr = (fopen("student.txt", "a"));

    if (fptr == NULL){
        printf("Error!");
        exit(1);
    }

    for (int i = 0; i < num; ++i){
        printf("For student%d\nEnter name: ", i+1);
        scanf("%s", name);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fptr, "\nName: %s \nMarks=%d \n", name, marks);
    }
    
    fclose(fptr);
    return 0;
}