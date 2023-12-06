#include <stdio.h>

typedef struct {
    char bookID[10];
    char bookName[50];
    char author[50];
    float price;
    char genre[20];
} Book;

Book books[100];
int bookCount = 0;

void enterBookInfo() {
    printf("Nhập số lượng sách: ");
    scanf("%d", &bookCount);
    for(int i = 0; i < bookCount; i++) {
        printf("Nhập thông tin sách thứ %d:\n", i+1);
        printf("Mã sách: ");
        scanf("%s", books[i].bookID);
        printf("Tên sách: ");
        scanf(" %[^\n]", books[i].bookName);
        printf("Tác giả: ");
        scanf(" %[^\n]", books[i].author);
        printf("Giá tiền: ");
        scanf("%f", &books[i].price);
        printf("Thể loại: ");
        scanf("%s", books[i].genre);
    }
}

void saveBookInfo() {
    FILE *file = fopen("books.txt", "w");
    if(file == NULL) {
        printf("Không thể mở file\n");
        return;
    }
    for(int i = 0; i < bookCount; i++) {
        fprintf(file, "%s - %s - %s - %.2f - %s\n", books[i].bookID, books[i].bookName, books[i].author, books[i].price, books[i].genre);
    }
    fclose(file);
    printf("Đã lưu thông tin sách vào file books.txt\n");
}

void displayBookInfo() {
    FILE *file = fopen("books.txt", "r");
    if(file == NULL) {
        printf("Không thể mở file\n");
        return;
    }
    char line[255];
    while(fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}

int main() {
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhập số lượng và thông tin sách\n");
        printf("2. Lưu thông tin sách vào file\n");
        printf("3. Hiển thị thông tin sách từ file\n");
        printf("4. Thoát\n");
        printf("Nhập lựa chọn của bạn: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                enterBookInfo();
                break;
            case 2:
                saveBookInfo();
                break;
            case 3:
                displayBookInfo();
                break;
        }
    } while(choice != 4);

    return 0;
}