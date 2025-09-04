#include <stdio.h>

int main() {
    int n;  // ตัวแปรเก็บจำนวนที่ผู้ใช้กรอก
    printf("Enter number: ");
    scanf("%d", &n);

    // เช็คว่าเป็นเลขคู่หรือคี่
    if (n % 2 == 0) {
        // ถ้าเลขคู่ ใช้ 
        for (int i = 1; i <= n; i++) {
            printf("(%d) Hello World\n", i);
        }
    } else {
        // ถ้าเลขคี่ ใช้ 
        for (int i = 1; i <= n; i++) {
            printf("[%d] Hello World\n", i);
        }
    }

    return 0;
}