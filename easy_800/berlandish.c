#include <stdio.h>
#include <string.h>

int main() {
    char berl[101];
    char birl[101];

    scanf("%s", berl);
    scanf("%s", birl);

    int size_berl = strlen(berl); 
    int size_birl = strlen(birl);

    // Check if lengths are different
    if (size_berl != size_birl) {
        printf("NO");
        return 0;
    }

    // Compare characters in reverse order
    for (int i = 0; i < size_berl; i++) {
        if (berl[i] != birl[size_birl - 1 - i]) {
            printf("NO");
            return 0; 
        }
    }

    printf("YES");
    return 0;
}
