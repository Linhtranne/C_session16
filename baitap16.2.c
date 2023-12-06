#include<stdio.h>
int main(){
    FILE *filePointer;
    char buffer[100];
    filePointer = fopen("C:\\Users\\ThanhNam\\Documents\\bt01.txt", "r");
    fread(buffer, sizeof(char), sizeof(buffer),filePointer);
    printf("Du lieu doc tu tap tin %s", buffer);
    fclose(filePointer);
    return 0;
}