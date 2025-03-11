/*

input 
4 ----------> total number of test cases 

1        --------------> there will be one element 
10        -------------->  and that element is 10 


3            ---------------> there will be 3 element 
998 244 353              ------------> those 3 elements 



5  -------------> 5 elements 
1 2 3 4 5  ------------> here they are 


9   -------> elements 
9 9 8 2 4 4 3 5 3 -------> here are they 


repeatedly do the following 

-- chose two distinct indices i and j. 
--  then choose a positive integer value x such that that ther exists a non-degenerate triangle. 


non degenerate when a + b > c , a + c > b, b + c > a 




-- finally remove two elements ai and aj, and append x to the end of a . 


-- please find the maximum possible value of the only last element in the sequence a. 



 */


#include <stdio.h>
#include <stdlib.h>

#define MAX_N 200000

int cmp(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int max_last_element(int *arr, int n) {
    qsort(arr, n, sizeof(int), cmp);

    while (n > 1) {
        int a = arr[0], b = arr[1];

        int x = a + b - 1;

        arr[0] = x;
        for (int i = 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        qsort(arr, n, sizeof(int), cmp);
    }
    
    return arr[0]; 
}

int main() {
    int t;
    scanf("%d", &t);
    
    int res[t]; 
    int index = 0; 

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        
        int arr[MAX_N];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
		
        res[index++] = max_last_element(arr, n); 
    }

    for (int i = 0; i < index; i++) {
        printf("%d\n", res[i]); 
    }

    return 0;
}

