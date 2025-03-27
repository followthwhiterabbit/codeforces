/*

a binary matrix is good if 

	-the bitwise xor of all numbers in each row and each column is equal to 0 .

	
	-the size is n x m ---> n row , m column 
	
	- interested in the minimum number of elements to be changed for the matrix to become good 

	
	input 
	7  ----> number of matrices
	3 3 ----> the size of the input matrix 
	010
	101
	010



	1 4 ----> 1 row 4 column 
	0101

	4 1 ----> 4 row 1 column
	0
	1
	0
	1


 */

   /*
     
    a binary matrix is good if 
     
    	-the bitwise xor of all numbers in each row and each column is equal to 0 .
     
    	
    	-the size is n x m ---> n row , m column 
    	
    	- interested in the minimum number of elements to be changed for the matrix to become good 
     
    	
    	input 
    	7  ----> number of matrices
    	3 3 ----> the size of the input matrix 
    	010
    	101
    	010
     
     
     
    	1 4 ----> 1 row 4 column 
    	0101
     
    	4 1 ----> 4 row 1 column
    	0
    	1
    	0
    	1
     
     
     */
     
#include <stdio.h>
#include <stdlib.h>


// Function to compute the minimum number of changes needed to make a matrix good
int minimum_number_of_changes(int *arr, int n, int m) {
    int row_xor[n];  // Store XOR results for each row
    int col_xor[m];  // Store XOR results for each column
    
    // Initialize row and column XORs to 0
    for (int i = 0; i < n; i++) row_xor[i] = 0;
    for (int j = 0; j < m; j++) col_xor[j] = 0;

    // Compute XOR for each row and each column
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            row_xor[i] ^= arr[i * m + j];  
            col_xor[j] ^= arr[i * m + j];
        }
    }

    int row_corrections = 0, col_corrections = 0;

    // Count the number of rows and columns that need correction
    for (int i = 0; i < n; i++) {
        if (row_xor[i] != 0) row_corrections++;
    }
    for (int j = 0; j < m; j++) {
        if (col_xor[j] != 0) col_corrections++;
    }

    // Minimum number of changes needed is max(row_corrections, col_corrections)
    return (row_corrections > col_corrections) ? row_corrections : col_corrections;
}

int main() {
    int num, n, m;
    
    scanf("%d", &num);  // Number of test cases
    int arr_res[num];   // Store results for each test case

    for (int i = 0; i < num; i++) {
        scanf("%d %d", &n, &m);

        // Allocate memory dynamically for the matrix
        int *arr = (int *)malloc(n * m * sizeof(int));

        // Read matrix input as a string
        char row[m + 1];  // +1 for null-terminator

        for (int j = 0; j < n; j++) {
            scanf("%s", row);  // Read the row as a string
            for (int k = 0; k < m; k++) {
                arr[j * m + k] = row[k] - '0';  // Convert '0'/'1' char to int
            }
        }

        // Compute result and store
        arr_res[i] = minimum_number_of_changes(arr, n, m);

        // Free allocated memory
        free(arr);
    }

    // Print all results
    for (int i = 0; i < num; i++)
        printf("%d\n", arr_res[i]);

    return 0;
}
