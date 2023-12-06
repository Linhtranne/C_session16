#include<stdio.h>
int main(){
    FILE *filePointer;
    char buffer[100];
    int numLines;
    filePointer = fopen("C:\\Users\\ThanhNam\\Documents\\demo.txt", "r");
    printf("Nhap vao so dong:");
    scanf("%d", &numLines);
    getchar();

    for (int i = 0; i < numLines; i++) {
        printf("Nhâp vao noi dung dong %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        fprintf(filePointer, "%s", buffer);
    }
    fclose(filePointer);

}