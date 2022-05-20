#include<stdio.h>


// // Auto Storage Class
// int main(){
//     int x;

//     // printing the garbage value
//     printf("%d\n", x);
    
//     return 0;
// }


// extern storage class

int main(){
    extern int y;    
    y = y + 5;
    printf("%d\n", y);
    printf("%d\n", y);
}
int y = 10;