#include<stdio.h>
typedef struct {
    char name[50];
    int age;
    char phone[15];
    char email[50];
} Student;

int main() {
    int n;
    printf("Nhập số lượng sinh viên: ");
    scanf("%d", &n);
    Student students[n];

    for(int i = 0; i < n; i++) {
        printf("Nhập thông tin sinh viên thứ %d:\n", i+1);
        printf("Họ và tên: ");
        scanf(" %[^\n]", students[i].name);
        printf("Tuổi: ");
        scanf("%d", &students[i].age);
        printf("Số điện thoại: ");
        scanf("%s", students[i].phone);
        printf("Email: ");
        scanf("%s", students[i].email);
    }

    FILE *file = fopen("students.txt", "w");
    if(file == NULL) {
        printf("Không thể mở file\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        fprintf(file, "Sinh viên %d: %s, %d tuổi, SĐT: %s, Email: %s\n", i+1, students[i].name, students[i].age, students[i].phone, students[i].email);
    }

    fclose(file);
    printf("Đã lưu thông tin sinh viên vào file students.txt\n");

    return 0;
}