#include<stdio.h>

int listPrime(int start, int end);

int main(){
    int start, end;

    printf("Enter the start, end: ");
    scanf("%d %d", &start, &end);
    listPrime(start, end);
    return 0;
}

int listPrime(int start, int end){
    
    for (int i = start; i < end; ++i){
        int flag = 0;

        if (i == 1 || i == 2){
            flag = 0;
        } 

        for (int j = 2; j < i; ++j){
            if (i % j == 0){
                flag = 1;
                break;
            }
        }

        if (flag==0){
            printf("%d ", i);
        }
    }
    return 0;
}