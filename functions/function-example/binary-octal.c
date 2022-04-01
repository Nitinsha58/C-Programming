#include<stdio.h>
#include<math.h>


long long octalToBinary(int oct);
int binaryToOctal(int bin);

int main() {
    int octNum;
    int binNum;
    printf("Enter the octal number: ");
    scanf("%d",&octNum);

    printf("%d Octal => %d binary\n", octNum, octalToBinary(octNum));
    
    printf("Enter binary value: ");
    scanf("%lld", &binNum);
    printf("%d binary => %d Octal\n", binNum, binaryToOctal(binNum));

}


long long octalToBinary(int oct){
    int dec = 0, i = 0;
    long long bin = 0;


    // Converting octal to decimal
    while (oct != 0){
        dec += (oct%10) * pow(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;

    // converting decimal to binary
    while (dec != 0){
        bin += (dec%2)*i;
        dec /= 2;
        i *= 10;
    }

    return bin;
}

int binaryToOctal(int bin) {
    int dec = 0, i = 0, oct = 0;

    // converting bin to decimal
    while (bin){
        dec += (bin%10) * pow(2, i);
        bin/= 10;
        ++i;

    }
    i = 1;

    // converting decimal to octal
    while (dec != 0){
        oct += (dec%8)*i;
        dec /= 8;
        i*= 10;
    }
    printf("Octal %d\n", oct);

    return oct;
}