#include <stdio.h>

// Ham kiem tra xem mot nam co phai la nam nhuan hay khong
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // La nam nhuan
    } else {
        return 0; // Khong phai la nam nhuan
    }
}

int main() {
    int year;

    // Nhap nam tu nguoi dung
    printf("Nhap mot nam: ");
    scanf("%d", &year);

    // Kiem tra va hien thi ket qua 
    if (isLeapYear(year)) {
        printf("%d la nam nhuan.\n", year);
    } else {
        printf("%d khong phai la nam nhuan.\n", year);
    }

    return 0;
}
