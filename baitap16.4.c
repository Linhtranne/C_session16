#include <stdio.h>

int main() {
    FILE *filePointer = fopen("bt03.txt", "r");
    if (filePointer == NULL) {
        printf("Không thể mở file\n");
        return 1;
    };
    int lines = 0;
    printf("\nSố dòng trong file: %d\n", lines);

    fclose(filePointer);
    return 0;
}