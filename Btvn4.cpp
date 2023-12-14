#include <stdio.h>

int main() {
    char character;

    // Nhap mot ki tu tu nguoi dung
    printf("Nhap mot ki tu: ");
    scanf(" %c", &character); // Chu y dau cach truoc %c de tranh doc ki tu trang tu bo nho dem.

    // Kiem tra loai ki tu va hien thi thong bao tuong ung
    if ((character >= 'A' && character <= 'Z')) {
        printf("%c la chu cai in hoa.\n", character);
    } else if (character >= 'a' && character <= 'z') {
        printf("%c là chu cai in thuong.\n", character);
    } else if (character >= '0' && character <= '9') {
        printf("%c la so.\n", character);
    } else {
        printf("%c la ki tu dac biet.\n", character);
    }

    return 0;
}
