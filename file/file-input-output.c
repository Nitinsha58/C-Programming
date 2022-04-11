#include<stdio.h>
#include<stdlib.h>


// Example 1: Write to a text file
// int main(){
//     int num;
//     FILE *fptr;

//     // use appropriate location if you are using MacOS or Linux
//     fptr = fopen("program.txt", "w");

//     if (fptr == NULL){
//         printf("Error!");
//         exit(1);
//     }

//     printf("Enter num: ");
//     scanf("%d", &num);

//     fprintf(fptr, "%d", num);
//     fclose(fptr);

//     return 0;
// }


// // Example 2: Read from a text file
// int main(){
//     int num;
//     FILE *fptr;

//     if ((fptr = fopen("program.txt", "r")) == NULL){
//         printf("Error! opening file");

//         // program exits if the file pointer returns NULL.
//         exit(1);
//     }


//     fscanf(fptr, "%d", &num);

//     printf("Value of n=%d", num);
//     fclose(fptr);

//     return 0;
// }


// // Example 3: write to a binary file using fwrite()
// struct threeNum {
//     int n1, n2, n3;
// };

// int main(){
//     int n;
//     struct threeNum num;
//     FILE *fptr;

//     if ((fptr = fopen("program.bin", "wb")) == NULL){
//         printf("Error! opening file");

//         // program exits if the file pointer returns NULL
//         exit(1);
//     }

//     for (n = 1; n < 5; ++n){
//         num.n1 = n;
//         num.n2 = 5*n;
//         num.n3 = 5*n + 1;
//         fwrite(&num, sizeof(struct threeNum), 1, fptr);
//     }

//     fclose(fptr);
// }



// // Example 4: Read from a binary file using fread()

// struct threeNum {
//     int n1, n2, n3;
// };

// int main(){
//     int n;
//     struct threeNum num;
//     FILE *fptr;

//     if ((fptr=fopen("program.bin", "rb")) == NULL){
//         printf("Error! opening file");

//         // program exits iif the file pointer returns Null
//         exit(1);
//     }

//     for (n = 0; n < 5; ++n){
//         fread(&num, sizeof(struct threeNum), 1, fptr);
//         printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//     }
//     fclose(fptr);
    
//     return 0;
// }


// Example 4: Read from a binary file using fread()

struct threeNum {
    int n1, n2, n3;
};

int main(){
    int n;
    struct threeNum num;
    FILE *fptr;

    if ((fptr=fopen("program.bin", "rb")) == NULL){
        printf("Error! opening file");

        // program exits iif the file pointer returns Null
        exit(1);
    }

    for (n = 0; n < 5; ++n){
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
        fseek(fptr, -2*sizeof(struct threeNum), SEEK_CUR);
    }
    fclose(fptr);
    
    return 0;
}