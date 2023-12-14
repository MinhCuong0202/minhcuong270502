#include <stdio.h>

// Ham tinh chi so  BMI
float calculate_bmi(float weight, float height) {
    return weight / (height * height);
}

// Ham danh gia tinh trang can nang dua tren chi so BMI
void interpret_bmi(float bmi) {
    printf("Chi so BMI cua ban la: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Tinh trang can nang: Gay\n");
    } else if (bmi < 24.9) {
        printf("Tinh trang can nang: Binh thuong\n");
    } else if (bmi < 29.9) {
        printf("Tinh trang can nang: Thua can\n");
    } else {
        printf("Tinh trang can nang: Beo phi\n");
    }
}

int main() {
    // Khai bao bien can nang và chieu cao
    float weight, height;

    // Nhap can nang và chieu cao tu nguoi dung
    printf("Nhap can nang (kg): ");
    scanf("%f", &weight);

    printf("Nhap chieu cao (m): ");
    scanf("%f", &height);
	// Tinh chi so BMI và hien thi tinh trang can nang
    float bmi = calculate_bmi(weight, height);
    interpret_bmi(bmi);

    return 0;
}
