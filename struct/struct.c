#include<stdio.h>
#include<string.h>


// create struct with person
struct Person {
    char name[50];
    int citNo;
    float salary;
} person1;

int main(){

    // Access members of a structures
    // . - member operator
    // -> - Structure pointer operator (will be discussed in the next tutorial)

    // Example 1: Structs
    
    // assign value to name of person1
    strcpy(person1.name,  "George  Orwell");

    // assign values to other person1 variables
    person1.citNo = 1984;
    person1.salary = 2500;

    // print struct variables
    printf("Name: %s\n", person1.name);
    printf("Citizenship No.: %d\n", person1.citNo);
    printf("Salary: %.2f\n", person1.salary);
    

    


    return 0;
}