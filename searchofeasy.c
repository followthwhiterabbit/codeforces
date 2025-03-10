/*
 *  3
 *  0 0 1 
 *
 * in the search of an easy problem 
 */ 

#include <stdio.h>

int main() {

	/*
    int n;

    scanf("%d", &n);

    int found_hard = 0;  // Flag to check if there's a '1'

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (x == 1) {
            found_hard = 1;
        }
    }

    if (found_hard) {
        printf("HARD\n");
    } else {
        printf("EASY\n");
    }
*/


    int n; 

    scanf("%d", &n);
    getchar();  // Consume the leftover newline

    char arr[200]; 
    char* el = arr; 

    for(int i = 0; i < n; i++) {
        scanf("%c", el); // Read character

        if (*el == '1') {
            printf("HARD");
            return 0;  // Exit immediately
        }

        getchar(); // Consume space between numbers (if any)
    }

    printf("EASY"); 
    return 0;
}




