#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct Student {
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct Student *ptr;
    int noOfRecords;
    printf("Enter the number of records: ");
    scanf("%d", &noOfRecords);

    // Memory allocation of noOfRecords structures
    ptr = (struct Student *)malloc(noOfRecords * sizeof(struct Student));

    for (int i = 0; i < noOfRecords; ++i){
        (ptr+i)->roll = i+1;
        printf("Enter name and marks: ");
        scanf("%s %f", (ptr+i)->name, &(ptr+i)->marks);    
    }

    printf("Displaying Information: \n");
    for (int i = 0; i < noOfRecords; ++i){
        printf("Student %d\n", (ptr+i)->roll);
        printf("%s\t%.1f\n", (ptr+i)->name, (ptr+i)->marks);
    }

    free(ptr);

    return 0;
}