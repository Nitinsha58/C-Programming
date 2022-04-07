#include<stdio.h>
#include<stdlib.h>
#include<math.h>


// float calculateSD(float data[]);


// void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
// void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
// void display(int mult[][10], int rowFirst, int columnSecond);
// void cyclicSwap(int *n1, int *n2, int *n3);

int main(){

    // // Example 1: Calculate teh average of array elements
    // int *ptr, n, sum = 0;

    // printf("Enter the number of elements: ");
    // scanf("%d", &n);

    // int list[n];

    // printf("Enter %d numbers: ", n);
    // for (int i = 0; i < n; ++i){
    //     // Equivalent to scanf("%d", &x[i])

    //     scanf("%d", list + i);

    //     // Equivalent to sum += x[i]
    //     sum += *(list + i);
    // }

    // printf("Average: %d", (sum/n));


    // // Example 2: Larget element in an array
    // int n;

    // printf("Enter the number of elements: ");
    // scanf("%d", &n);
    // double arr[n];

    // printf("Enter %d elements: ", n);
    // for(int i = 0; i < n; ++i){
    //     scanf("%lf", arr + i);
    // }

    // // storing the larget number to arr[0]
    // for (int i = 0; i < n; ++i){
    //     if (arr[0] < arr[i])
    //     {
    //         arr[0] = arr[i];
    //     }       
    // }

    // printf("Larget element = %.2lf", arr[0]);


    // // Example 3: Calculate standard deviation
    // float data[10];
    // printf("Enter 10 elements: ");
    // for (int i = 0; i < 10; ++i){
    //     scanf("%f", &data[i]);
    // }

    // printf("\nStandard Deviation = %.6f", calculateSD(data));


    // // Example 4: Add two matrices
    // int r, c , a[100][100], b[100][100], sum[100][100];
    // printf("Enter the number of rows (between 1 and 100)");
    // scanf("%d", &r);
    // printf("Enter the number of columns (between 1 and 100): ");
    // scanf("%d", &c);

    // printf("\nEnter elements of 1st matrix: \n");
    // for (int i = 0; i < r; ++i){
    //     for (int j = 0; j < c; ++j){
    //         printf("Enter element a%d%d: ", i+1, j+1);
    //         scanf("%d", &a[i][j]);
    //     }
    // }

    // printf("\nEnter elements of 2nd matrix: \n");
    // for (int i = 0; i < r; ++i){
    //     for (int j = 0; j < c; ++j){
    //         printf("Enter element b%d%d: ", i+1, j+1);
    //         scanf("%d", &b[i][j]);
    //     }
    // }

    // // adding two matrices
    // for (int i = 0; i < r; ++i){
    //     for (int j = 0; j < c; ++j){
    //         sum[i][j] = a[i][j] + b[i][j];
    //     }
    // }


    // // printing the result
    // printf("\nSum of two matrices: \n");
    // for (int i = 0; i < r; ++i){
    //     for (int j = 0; j < c; ++j){
    //         printf("%d ", sum[i][j]);
    //     }
    //     printf("\n\n");
    // }


    // // Example 5: Multiplication of two matrices
        
    // int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond, i, j, k;

	// printf("Enter rows and column for first matrix: ");
	// scanf("%d %d", &rowFirst, &columnFirst);

	// printf("Enter rows and column for second matrix: ");
	// scanf("%d %d", &rowSecond, &columnSecond);

	// // If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.
	// while (columnFirst != rowSecond){
	// 	printf("Error! column of first matrix not equal to row of second.\n");
	// 	printf("Enter rows and column for first matrix: ");
	// 	scanf("%d%d", &rowFirst, &columnFirst);
	// 	printf("Enter rows and column for second matrix: ");
	// 	scanf("%d%d", &rowSecond, &columnSecond);
	// }

	// // Function to take matrices data
    // enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

    // // Function to multiply two matrices.
    // multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);

    // // Function to display resultant matrix after multiplication.
    // display(mult, rowFirst, columnSecond);


    // // Find transpose of a matrix
    // int matrix[10][10], t_matrix[10][10], row, column;

    // printf("Enter rows and column for first matrix: ");
    // scanf("%d %d", &row, &column);

    // for(int i = 0; i < row; ++i){
    //     for (int j = 0; j < column; ++j){
    //         printf("Enter a%d%d: ", i+1, j+1);
    //         scanf("%d", &matrix[i][j]);
    //     }
    // }


    // for (int i = 0; i < column; ++i){
    //     for (int j = 0; j < row; ++j){
    //         printf("prev: %d %d \t:\t %d %d\n", i, j , j , i);
    //         t_matrix[i][j] = matrix[j][i];
    //     }
    // }

	// for(int i = 0; i < column; ++i){
	// 	for(int j = 0; j < row; ++j){
	// 		printf("%d  ", t_matrix[i][j]);
            
	// 	}
    //     printf("\n\n");
	// }    


    // // Example: Access elements of an array using pointers
    // int arr[] = {1, 2, 3, 4, 5, 6};

    // for (int i = 0; i < 6; ++i){
    //     printf("%d\n", *arr+i);
    // }



    // // Example: Swap numbers in the cyclic order using call by reference
    // int a, b, c;
    // printf("Enter a, b, and c respectively: ");
    // scanf("%d %d %d", &a, &b, &c);
    
    // printf("VAlue before swapping: \n");
    // printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    // cyclicSwap(&a, &b, &c);

    // printf("VAlue before swapping: \n");
    // printf("a = %d \nb = %d \nc = %d\n", a, b, c);


    // Example: Find the largest Element
    int n;
    double *data;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    // Allocating memory for n elements
    data = (double *)calloc(n, sizeof(double));
    if (data == NULL) {
        printf("Error!!! memory not allocated. ");
        exit(0);
    }

    // Storing numbers entered by the user.
    for (int i = 0; i < n; ++i){
        printf("Enter the number %d: ", i + 1);
        scanf("%lf", data + i);
    }

    // Finding the largest number
    for (int i = 0; i < n; ++i){
        if (*data < *(data+i)){
            *data = *(data + i);
        }
    }

    printf("Largest number = %.2lf", *data);
	free(data);
    return 0;
}

// void cyclicSwap(int *n1, int *n2, int *n3){
//     int temp;
//     temp = *n2;
//     *n2 = *n1;
//     *n1 = *n3;
//     *n3 = temp;
// }

// void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
// {
// 	int i, j;
// 	printf("\nEnter elements of matrix 1:\n");
// 	for(i = 0; i < rowFirst; ++i)
// 	{
// 		for(j = 0; j < columnFirst; ++j)
// 		{
// 			printf("Enter elements a%d%d: ", i + 1, j + 1);
// 			scanf("%d", &firstMatrix[i][j]);
// 		}
// 	}

// 	printf("\nEnter elements of matrix 2:\n");
// 	for(i = 0; i < rowSecond; ++i)
// 	{
// 		for(j = 0; j < columnSecond; ++j)
// 		{
// 			printf("Enter elements b%d%d: ", i + 1, j + 1);
// 			scanf("%d", &secondMatrix[i][j]);
// 		}
// 	}
// }

// void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
// {
// 	int i, j, k;

// 	// Initializing elements of matrix mult to 0.
// 	for(i = 0; i < rowFirst; ++i)
// 	{
// 		for(j = 0; j < columnSecond; ++j)
// 		{
// 			mult[i][j] = 0;
// 		}
// 	}

// 	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
// 	for(i = 0; i < rowFirst; ++i)
// 	{
// 		for(j = 0; j < columnSecond; ++j)
// 		{
// 			for(k=0; k<columnFirst; ++k)
// 			{
// 				mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
// 			}
// 		}
// 	}
// }

// void display(int mult[][10], int rowFirst, int columnSecond)
// {
// 	int i, j;
// 	printf("\nOutput Matrix:\n");
// 	for(i = 0; i < rowFirst; ++i)
// 	{
// 		for(j = 0; j < columnSecond; ++j)
// 		{
// 			printf("%d  ", mult[i][j]);
// 			if(j == columnSecond - 1)
// 				printf("\n\n");
// 		}
// 	}
// }





// float calculateSD(float data[]){
//     float sum = 0.0, mean, SD = 0.0;
//     for (int i = 0; i < 10; ++i){
//         sum += data[i];
//     }

//     mean = sum / 10;
//     for (int i = 0; i < 10; ++i){
//         SD += pow(data[i]-mean, 2);
//     }

//     return sqrt(SD/10);
// }