//7. Explain the use of break, continue, and goto statements in C. Provide examples of each.

#include <stdio.h>

int main() {
    int i;

    printf("Using break:\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5)
            break; // exits loop when i is 5
        printf("%d ", i);
    }

    printf("\n\nUsing continue:\n");
    for(i = 1; i <= 5; i++) {
        if(i == 3)
            continue; // skips 3
        printf("%d ", i);
    }

    printf("\n\nUsing goto:\n");
    i = 1;
    while(i <= 5) {
        if(i == 4)
            goto skip; // jumps to label
        printf("%d ", i);
        i++;
        continue;

        skip:
        printf("Skipped 4\n");
        i++;
    }

    return 0;
}

