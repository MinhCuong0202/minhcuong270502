
#include <math.h>

int main() {
    int a, b, c;
    
    printf("Nhap gia tri cua a: ");
    scanf("%d", &a);
    
    printf("Nhap gia tri cua b: ");
    scanf("%d", &b);
    
    printf("Nhap gia tri cua c: ");
    scanf("%d", &c);

    // Tính delta
    int delta = b * b - 4 * a * c;

    if (delta > 0) {
        
        float x1 = (-b + sqrt(delta)) / (2.0 * a);
        float x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("Nghiem cua phuong trinh la: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        
        float x = -b / (2.0 * a);
        printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
    } else {
    
        float realPart = -b / (2.0 * a);
        float imaginaryPart = sqrt(-delta) / (2.0 * a);
        printf("Nghiem cua phuong trinh la: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
