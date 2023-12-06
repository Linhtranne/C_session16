#include<stdio.h>
int main(){
    // C:\Users\ThanhNam\Documents\Untitled.txt
    FILE *filePointer;
    char buffer[100];
    filePointer = fopen("C:\\Users\\ThanhNam\\Documents\\bt01.txt", "w");
    printf("Nhap vao 1 chuoi");
    fgets(buffer, sizeof(buffer),stdin);
    fprintf(filePointer,"%s",buffer);
    fclose(filePointer);
    printf("Nhap them vao thanh cong");
    return 0;
}