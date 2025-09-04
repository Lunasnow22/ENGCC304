#include <stdio.h>

int main() {
    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    // วนจาก n ลงไปถึง 2
    for (int i = n; i >= 2; i--) {
        int isPrime = 1; // สมมติว่า i เป็นจำนวนเฉพาะก่อน

        // ตรวจสอบว่า i หารด้วยเลขอื่นลงตัวมั้ย
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {   // ถ้าหารลงตัวแสดงว่าไม่ใช่จำนวนเฉพาะ
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);  // แสดงจำนวนเฉพาะ
        }
    }

    return 0;
}