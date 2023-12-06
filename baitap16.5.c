#include <stdio.h>

void copyFile(char *sourceFile, FILE *targetFile) {
    FILE *source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Không thể mở tệp %s\n", sourceFile);
        return;
    }


    fclose(source);
}

int main() {
    FILE *target = fopen("bt5.txt", "w");
    if (target == NULL) {
        printf("Không thể mở tệp bt5.txt\n");
        return 1;
    }

    copyFile("bt01", target);
    copyFile("bt03", target);

    fclose(target);

    printf("Đã sao chép xong nội dung từ tệp bt01 và bt03 sang tệp bt5.txt\n");

    return 0;
}