#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("lab_task.txt", "w");

    
    if (fptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    
    fprintf(fptr, "This sentence is written using C language file handling.");

    
    fclose(fptr);

    printf("Success: Sentence written to lab_task.txt\n");
    return 0;
}