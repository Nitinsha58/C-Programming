#include<stdio.h>


// Example1: Enumeration Type
// enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

// int main(){
//     // creating today variable of enum week type

//     enum week today;
//     today = Wednesday;
//     printf("Day %d", today+1);

//     return 0;
// }


// // Example2: Why enums are used
// // An enum variable can take only one value. Here is an example to demonstrate it,

// enum suit {
//     club = 0,
//     diamonds = 10,
//     hearts = 20,
//     spades = 3,
// } card;

// int main(){
//     card = club;
//     printf("Size of enum variable = %d bytes", sizeof(card));
//     return 0;
// }

// // Example3: How touse enums for flags

// enum designFlags {
//     BOLD = 1,
//     ITALICS = 2,
//     UNDERLINE = 4,
// };

// int main(){
//     int myDesign = BOLD | UNDERLINE;
    
//     //   000001
//     // | 000100
//     // ________
//     //   000101

//     printf("%d", myDesign);

//     return 0;
// }

